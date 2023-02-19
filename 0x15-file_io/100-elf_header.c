#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_error(char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        print_error("Invalid number of arguments");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Cannot open file");
    }

    Elf32_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Cannot read ELF header");
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("Not an ELF file");
    }

    printf("Magic:   %02x %02x %02x %02x\n",
           header.e_ident[EI_MAG0], header.e_ident[EI_MAG1],
           header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);

    printf("Class:                             ");
    switch (header.e_ident[EI_CLASS]) {
        case ELFCLASSNONE: printf("none\n"); break;
        case ELFCLASS32:   printf("ELF32\n"); break;
        case ELFCLASS64:   printf("ELF64\n"); break;
        default:           printf("<unknown>\n"); break;
    }

    printf("Data:                              ");
    switch (header.e_ident[EI_DATA]) {
        case ELFDATANONE: printf("none\n"); break;
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default:          printf("<unknown>\n"); break;
    }

    printf("Version:                           %d\n",
           header.e_ident[EI_VERSION]);

    printf("OS/ABI:                            ");
    switch (header.e_ident[EI_VERSION])
    {
		        case ELFOSABI_SYSV:         printf("UNIX - System V\n"); break;
    case ELFOSABI_HPUX:         printf("UNIX - HP-UX\n"); break;
    case ELFOSABI_NETBSD:       printf("UNIX - NetBSD\n"); break;
    case ELFOSABI_LINUX:        printf("UNIX - Linux\n"); break;
    case ELFOSABI_SOLARIS:      printf("UNIX - Solaris\n"); break;
    case ELFOSABI_IRIX:         printf("UNIX - IRIX\n"); break;
    case ELFOSABI_FREEBSD:      printf("UNIX - FreeBSD\n"); break;
    case ELFOSABI_TRU64:        printf("UNIX - TRU64\n"); break;
    case ELFOSABI_ARM:          printf("ARM\n"); break;
    case ELFOSABI_STANDALONE:   printf("Standalone App\n"); break;
    default:                    printf("<unknown>\n"); break;
    }

    printf("ABI Version:                       %d\n",
           header.e_ident[EI_ABIVERSION]);

    printf("Type:                              ");
    switch (header.e_type) {
        case ET_NONE:   printf("NONE (None)\n"); break;
        case ET_REL:    printf("REL (Relocatable file)\n"); break;
        case ET_EXEC:   printf("EXEC (Executable file)\n"); break;
        case ET_DYN:    printf("DYN (Shared object file)\n"); break;
        case ET_CORE:   printf("CORE (Core file)\n"); break;
        default:        printf("<unknown>\n"); break;
    }

    printf("Entry point address:               0x%08x\n",
           header.e_entry);

    close(fd);
    return 0;
}

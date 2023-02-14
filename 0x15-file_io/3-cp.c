#include "main.h"

void _close(int fd);
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if success or exits
 */

int main(int argc, char *argv[])
{
	int from_file, to_file, no_read;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_file = open(argv[1], O_RDONLY);
	if (from_file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_file = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((no_read = read(from_file, buffer, 1024)) > 0)
	{
		if (to_file < 0 || (write(_file2, buffer, no_read) != no_read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	_close (from_file);
	_close(to_file);
	
	return (0);
}

/**
*_close - closes a file
*@fd: file descriptor
*Return: void
*/
void _close(int fd)
{
	int shut = close(fd);

	if (shut < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

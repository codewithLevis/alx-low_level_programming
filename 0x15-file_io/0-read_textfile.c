#include "main.h"

/**
*read_textfile -  reads a text file and prints it to the POSIX standard output
*@filename: name of file to be read
*@letters: the number of letters it should read and print
*Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fp;
ssize_t counter, check;
char *info = NULL;

if (filename == NULL)
return (0);

fp = open(filename, O_RDONLY);

if (fp < 0)
return (0);

info = malloc(sizeof(char *) * (letters + 1));

if (info == NULL)
return (0);

counter = read(fp, info, letters);

 if (counter < 0)
 {
        free(info);
        close(fp);
        return (0);
}

info[counter] = '\0';

check = write(1, info, counter);

if (check != counter)
{
free(info);
close(fp);
return (0);
}

free(info);
close(fp);

return (check);
}

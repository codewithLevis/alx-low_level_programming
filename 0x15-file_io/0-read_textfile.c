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
char *info;

if (filename == NULL)
return (0);

fp = open(filename, O_RDONLY);

if (fp == -1)
return (0);

info = malloc(sizeof(char) * letters);

if (info == NULL)
{
close(fp);
return (0);
}

counter = read(fp, info, letters);
close(fp);
if (counter == -1)
{
free(info);
return (0);
}
check = write(STDOUT_FILENO, info, counter);
free(info);

if (check != counter)
return (0);

return (check);
}

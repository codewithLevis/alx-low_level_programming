#include "main.h"

/**
*_strlen - finds length of a string
*@s: string
*Return: length
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}


/**
*create_file - creates a file
*@filename:  the name of the file to create
*@ext_content: a NULL terminated string to write to the file
*Return: 1 on success, -1 on failure
*created file must have those permissions: rw-------
*If the file already exists, do not change the permissions.
*if the file already exists, truncate it
*/

int create_file(const char *filename, char *text_content)
{
	int fp;
	int check, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = _strlen(text_content);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fp == -1)
		return (-1);

	check = write(fp, text_content, len);

	if (check == -1)
		return (-1);
	
	close(fp);

	return (1);
}
	

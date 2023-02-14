#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *Do not create the file if it does not exist
 * @filename:  the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int written, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;

	written = write(fd, text_content, i);
	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

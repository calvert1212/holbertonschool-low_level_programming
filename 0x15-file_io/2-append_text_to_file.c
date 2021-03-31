#include "holberton.h"

/**
 * append_text_to_file - Appends text to end of a file
 * @filename: Name of the file
 * @text_content: Text in the file
 * Return: -1 on fail, 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, appendcheck = 0;

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
	appendcheck = write(fd, text_content, _strlen(text_content));
	if (appendcheck == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - Gets length of a string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		continue;
	}
	return (x);
}

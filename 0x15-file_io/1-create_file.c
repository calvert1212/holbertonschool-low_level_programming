#include "main.h"

/**
 * create_file - Creates a file
 * @filename: File name
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename,  O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	write(fd, text_content, strlen(text_content));
return (1);
}

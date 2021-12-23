#include "main.h"

/**
 * append_text_to_file - appends a text
 * @filename: pointer to the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int lo, lw;
	int l;

	if (filename == NULL)
		return (-1);
	lo = open(filename, O_WRONLY | O_APPEND);
	if (lo == -1)
		return (-1);
	if (text_content)
	{
		l = strlen(text_content);
		lw = write(lo, text_content, l);
		if (lw == -1)
			return (-1);
	}
return (1);
}

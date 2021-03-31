#include "holberton.h"

int create_file(const char *filename, char *text_content)
{
	int desc, writecheck;
	
	if (filename == NULL)
		return (-1);
	desc = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (desc == -1)
		return (-1);

	if (text_content == NULL)
	{
			close(desc);
			return (1);
			}
	writecheck = write(desc, text_content, _strlen(text_content));
	if (writecheck == -1)
		return (-1);
}

/**
 * _strlen - Gets length of a string
 *
 */
int str_len(char *s)
{
	int x;

	for (x = 0, x != '\0', x++)
	{
		continue;
	}
	return (x);
}

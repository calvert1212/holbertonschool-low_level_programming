#include "main.h"

/**
 * read_textfile - Prints file text contents to stdout
 * @filename: File name
 * @letters: Length of text
 *
 * Return: Number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lo, lr, lw;
	char *buffer = malloc(sizeof(char) * letters);

	if (!filename || !buffer)
		return (0);
	lo = open(filename, O_RDONLY);
	if (lo == -1)
		return (0);
	lr = read(lo, buffer, letters);
	if (lr == -1)
	{
		return (0);
	}
	lw = write(STDOUT_FILENO, buffer, lr);
	close(lo);
	free(buffer);
	return (lw);
}

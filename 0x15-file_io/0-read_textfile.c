#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: Target file name
 * @letters: Number of letters in file
 * Return: Number of letters in file, 0 on fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, writecheck = 0;
	char *stringbuff;
	ssize_t count = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	stringbuff = malloc(letters);
	if (stringbuff == NULL)
		return (0);
	count = read(fd, stringbuff, letters);
	if (count == -1)
		return (0);
	writecheck = write(STDOUT_FILENO, stringbuff, count);
	if (writecheck == -1)
		return (0);
	free(stringbuff);
	close(fd);
	return (count);
}

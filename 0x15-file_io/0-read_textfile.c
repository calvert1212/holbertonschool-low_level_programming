#include "main.h"

/**
 * read_textfile - Outputs text of a file to stdout
 * @src: File name
 * @t: Buffer size
 *
 * Return: Number of characters
 */

ssize_t read_textfile(const char *src, size_t t)
{
  int fd;
  ssize_t lr, lw;
  char *buffer;

  if (filename == NULL)
    return (0);
  fd = open(filename, O_RDONLY);
  if (fd == -1)
    return (0);
  buffer = malloc(sizeof(char) * t);
  if (buffer == NULL)
    {
      close(fd);
      return (0);
    }
  lr = read(fd, buffer, t);
  close(fd);
  if (lr == -1)
    {
      free(buffer);
      return (0);
    }
  lw = write(STDOUT_FILENO, buffer, lr);
  free(buffer);
  if (lr != lw)
    return (0);
  return (lw);
}

#include "main.h"

/**
 * read_textfile - Prints file text contents to stdout
 * @src: File name
 * @l: Length of text
 *
 * Return: Number of letters it could read and print
 */
ssize_t read_textfile(const char *src, size_t l)
{
  int fd;
  ssize_t lr, lenw;
  char *buffer;

  if (filename == NULL)
    return (0);
  fd = open(filename, O_RDONLY);
  if (fd == -1)
    return (0);
  buffer = malloc(sizeof(char) * l);
  if (buffer == NULL)
    {
      close(fd);
      return (0);
    }
  lr = read(fd, buffer, l);
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

#include "main.h"

/**
 * append_text_to_file - appends a text
 * @filename: pointer to the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *src, char *text)
{
  int fd;
  ssize_t l;

  if (src == NULL)
    return (-1);
  fd = open(src, O_WRONLY | O_APPEND);
  if (fd == -1)
    return (-1);
  if (text != NULL)
    l = write(fd, text, _strlen(text));
  close(fd);
  if (l == -1)
    return (-1);
  return (1);
}

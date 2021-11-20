ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int _putchar(char *c);
size_t _strlen(char *c);
ssize_t read_textfile(const char *src, size_t len);
int create_file(const char *src, char *t);
int append_text_to_file(const char *src, char *t);

#endif

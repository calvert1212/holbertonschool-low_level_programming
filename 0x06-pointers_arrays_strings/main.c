#include "shell.h"
/**
* *str_concat - Mallocs space for two strings
* @s1: String one
* @s2: String two
* Return: string
*
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	cat = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (cat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		cat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++, i++)
		cat[i] = s2[j];

	cat[i + j] = '\0';

	return (cat);
}
/**
* main - Our main Func
* Return: Zero
*/
int main(void)
{
	size_t sizebuf = 1024;
	ssize_t ret;
	char *tmpbuf, *buffer;
	char **args;

	while (1)
	{
		tmpbuf = malloc(sizeof(char) * sizebuf);
		if (tmpbuf == NULL)
			return (-1);
		write(1, "$ ", 2);
		ret = getline(&tmpbuf, &sizebuf, stdin);
		if (ret == -1)
			return (-1);
		args = malloc(sizeof(char *) * 2);
		buffer = _cutchar(tmpbuf, '\n');
		if (_strcmp(buffer, "exit") == 0)
			exit(98);
		args = tokenizer(args, buffer, " \0\n");
		if (fork() != 0)
		{
			free(buffer);
			free(tmpbuf);
			wait(NULL);
		}
		else
		{
			if (execve(args[0], args, 0) == -1)
			{
				perror("error: invalid command\n");
				free(buffer);
			}
		}
	}
	/*parse the array, and create a fork to execve to bin/command*/
	/*error or condition checking, check stat or code sent back by child*/
	/*know when to start the prompt again- unless we dont*/

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - function to initialize array of size size with char c
 * @size: size of array in chars
 * @c: character to initialize with
 * Return: pointer to the array, or NULL on fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count = 0;
	char *arr;
	
	if (size == 0)
		return (NULL);
	else
	{
		arr = (char *)malloc(size * sizeof(char));
		if (arr != NULL)
		{
			while (count <= size)
	{
		arr[count] = c;
	}
		}
	return(arr);
	}
}

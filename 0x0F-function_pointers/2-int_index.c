#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches an array for an int
 * @array: the array of integers
 * @size: number of elements in array
 * @cmp: pointer to the function that compares values
 * Return: index of first element where cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (array != NULL && cmp != NULL)
	{
		while (count < size)
		{
			if ((cmp(array[count])) == 0)
			count++;
			else
				break;
		}
	}
	return (count);
}

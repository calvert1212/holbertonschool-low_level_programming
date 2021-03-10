#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Uses a given function on a given array
 * @array: Target array
 * @size: Number of elements in the array
 * @action: Function to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array != NULL && action != NULL)
	{
		count = 0;
		while (count < size)
		{
			action(array[count]);
			count++;
		}
	}
}

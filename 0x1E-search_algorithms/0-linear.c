#include "search_algos.h"


/**
 * linear_search 
 *
 * @array: holds elaments
 * @size: num of elaments
 * @value: to serch
 * Return: If value is not present in array or if array is NULL, return -1
 * Otherwise, return the first index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}

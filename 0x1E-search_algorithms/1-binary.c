#include "search_algos.h"


/**
 * binary_search_recursion
 *
 * @array: pointer to the first element
 * @min: The index min
 * @max: The index max
 * @value: value
 * Return: If value is not present in array or if array is NULL, return -1
 * Otherwise, return the first index of value
 */
int binary_search_recursion(int *array, size_t min, size_t max, int value)
{
	size_t index = (max + min) / 2;
	size_t loop;

	printf("Searching in array: ");
	for (loop = min; loop <= max; loop++)
	{
		printf("%d", array[loop]);
		if (loop < max)
			printf(", ");
		else
			printf("\n");
	}

	if (min == max)
	{
		if (value == array[max])
			return (max);
		else
			return (-1);
	}

	if (value == array[index])
		return (index);

	if (value < array[index])
		return (binary_search_recursion(array, min, index - 1, value));

	if (value > array[index])
		return (binary_search_recursion(array, index + 1, max, value));

	return (-1);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element
 * @size: num of elements
 * @value: value
 * Return: If value is not present in array or if array is NULL, return -1
 * Otherwise, return the first index of value
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search_recursion(array, 0, size - 1, value));
}

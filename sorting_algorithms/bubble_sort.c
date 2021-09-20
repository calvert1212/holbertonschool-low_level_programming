#include "sort.h"

/**
 * bubble_sort - Bubble assorts an array
 *
 * @array: Array argument
 * @size: Array size
 *
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
  unsigned int arr, i;
  int c;
  if (size < 2)
    return;
  if (array == NULL)
    return;

  for (i = 1; i <= size; i++)
    {
      for (arr = 0; arr < size - i; arr++)
	{
	  if (array[arr] > array[arr + 1])
	    {
	      c = array[arr];
	      array[arr] = array[arr + 1];
	      array[arr + 1] = c;
	      print_array(array, size);
	    }
	}
    }
}

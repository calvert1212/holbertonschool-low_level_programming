#include"function_pointers.h"
#include<stdlib.h>

/**
* int_index - executes a function given as a parameter.
* @array: array.
* @size: size of array.
* @cmp: function pointer.
* Return: integer, -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{

int i;
int o = 0;

if (array && cmp && size >= 0)
{
for (i = 0; i < size; i++)
{
o = cmp(array[i]);
if (o)
{
return (i);
}
}
}
return (-1);
}

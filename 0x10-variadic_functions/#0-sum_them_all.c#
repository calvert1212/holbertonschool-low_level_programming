#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - sum all arguments
* @n: number of items in list
* Return: result sum
*/
int sum_them_all(const unsigned int n, ...)
{

va_list my_list;
unsigned int counter;
int sum;

va_start(my_list, n);

if (n == 0)
{
return (0);
}

sum = 0;
for (counter = 0; counter < n; counter++)
{
sum += va_arg(my_list, int);
}

va_end(my_list);

return (sum);
}

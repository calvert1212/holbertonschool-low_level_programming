#include"variadic_functions.h"

/**
* print_strings - print all arguments strings.
* @separator: string between arguments.
* @n: number arguments.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *x;

va_start(valist, n);
for (i = 0; i < n; i++)
{
x = va_arg(valist, char *);
if (x != NULL)
printf("%s", x);
else
printf("(nil)");
if (i + 1 < n && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}

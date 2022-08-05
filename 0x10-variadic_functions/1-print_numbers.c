#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - print varying amount of numbers
 *@separator:string to be printed between numbers
 *
 *@n: amount of arguments in list
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list num;
va_start(num, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(num, int));
if (i < (n - 1) && *separator != '\0')
printf("%c ", *separator);
}
printf("\n");
va_end(num);
}

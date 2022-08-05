#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list nums;
va_start(nums, n);
for (i = 0; i < n; i++)
{
char *a;
a = va_arg(nums, char *);
printf("%s", a);
if (i < (n - 1) && *separator != '\0')
printf("%c ", *separator);
if (a == NULL)
printf("nil");
}
printf("\n");
}

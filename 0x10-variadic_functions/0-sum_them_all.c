#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list nums;
va_start(nums, n);
if (n != 0)
{
unsigned int i;
unsigned int sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(nums, int);
}
va_end(nums);
return (sum);
}
return (0);
}

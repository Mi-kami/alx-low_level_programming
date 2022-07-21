#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
*/

int _pow_recursion(int x, int y)
{
int i = 0;
if (y < 0)
return (-1);
if (y == 0)
return (1);
i = x * _pow_recursion(x, (y - 1));
return (i);
}

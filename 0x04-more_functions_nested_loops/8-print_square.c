#include "main.h"

/**
 * print_square - print a square of #'s given size
 * @size: size to draw
*/

void print_square(int size)
{
int x, i;
if (size <= 0)
_putchar('\n');
else
{
for (x = 0; x < size; x++)
{
for (i = 0; i <  size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: numbers of characters to draw
*/

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}



#include "main.h"
#include <string.h>

/**
 * print_rev -  prints a string, in reverse
 * @s: string to be printed in reverse.
 * Return: Always 0 (success)
*/

void print_rev(char *s)
{
int i, n;
n = 0;
while (s[n] != '\0')
n++;
for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

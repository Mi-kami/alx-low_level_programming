#include <stdio.h>
#include <stdlib.h>

/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
*/

int main(void)
{
int i;
for (i = 'Z' ; i >= 'A'; i--)
{
printf("%c", i);
}
return (0);
}

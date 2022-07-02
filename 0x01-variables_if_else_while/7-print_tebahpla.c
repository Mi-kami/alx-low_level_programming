#include <stdio.h>
#include <stdlib.h>

/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
*/

int main(void)
{
int i;
for (i = 'z' ; i >= 'a'; i--)
{
printf("%c", i);
}
return (0);
}

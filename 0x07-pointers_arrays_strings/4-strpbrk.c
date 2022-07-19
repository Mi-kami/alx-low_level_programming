#include "main.h"
#include <stdio.h>
#define NULL ((void *)0)

/**
* _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
*/

char *_strpbrk(char *s, char *accept)
{
int a = 0, b;
while (s[a])
{
b = 0;
while (accept[b])
{
if (s[a] == accept[b])
{
s += a;
return (s);
}
b++;
}
a++;
}
return ('\0');
}

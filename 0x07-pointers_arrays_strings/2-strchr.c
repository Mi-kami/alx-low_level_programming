#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate 1st occurrence of char in string and returns pointer there
 * @s: string to search
 * @c: target characer
 * Return: pointer to that character in string
*/

char *_strchr(char *s, char c)
{
int i;
while (1)
{
i = *s++;
if (i == c)
{
return (s - 1);
}
if (i == 0)
{
return (NULL);
}
}
}

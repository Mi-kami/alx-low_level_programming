#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase character
 * @c: the character to be checked
 * Return:1 if c is uppercase, otherwise 0.
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}

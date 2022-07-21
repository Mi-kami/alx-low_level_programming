#include "main.h"
#include <stdio.h>
#include <math.h>
int _sqrt(int n, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 0));
}

/**
 * _sqrt - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @root: iterator
 *
 * Return: the resulting square root
 */
int _sqrt(int n, int root)
{
if (root * root > n)
return (-1);
if (root * root == n)
return (root);
return (_sqrt(n, root + 1));
}

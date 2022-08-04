#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include "3-calc.h"

/**
 * main - when user runs main,
 * user should give two integers and an operator and
 * main will calculate the math via a function pointer.
 * prints sum, difference, product, dividend, or remainder
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
int n1, n2, result;
char o; 
int (*f)(int, int);
/* validate input */
if (argc != 4)
{
printf("Error\n");
exit(98);
}
/* convert user input to ints and point to correct operator function */
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
f = get_op_func(argv[2]);
if (!f)
{
printf("Error\n");
exit(99);
}
o = *argv[2];
if ((o == '/' || o == '%') && n2 == '0')
{
printf("Error\n");
exit(100);
}
result = f(n1, n2);
printf("%d\n", result); /* calculate via function ptr */
return (0);
}

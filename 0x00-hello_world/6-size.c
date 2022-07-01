#include<stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *sizeof evaluates the size of a variables
*/

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("size of a long int: %zu byte(s)\n", sizeof(longinttype));
printf("size of a long long int: %zu byte(s)\n", sizeof(longlonginttype));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}

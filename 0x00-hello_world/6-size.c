#include<stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *sizeof evaluates the size of a variables
*/

int main(void)
{
char acharacter;
int ainteger;
long along;
long long alonglong;
float afloat;

printf("Size of a char: %d byte(s)\n", sizeof(acharacter));
printf("Size of an int: %d byte(s)\n", sizeof(integer));
printf("size of a long int: %d byte(s)\n", sizeof(along));
printf("size of a long long int: %d byte(s)\n", sizeof(alonglong));
printf("Size of a float: %d byte(s)\n", sizeof(afloat));
return (0);
}

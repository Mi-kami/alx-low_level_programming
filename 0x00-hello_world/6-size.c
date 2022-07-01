#include<stdio.h>

/**
 *main - prints the 
 *Return: Always 0 (success)
 *size of evaluates the size of variables
*/
int main(void)
{  
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long int));
printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}

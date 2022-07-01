#include<stdio.h>

/**
 *main - prints the 
 *Return: Always 0 (success)
 *size of evaluates the size of variables
*/
int main(void)
{
int i;
char c;
float f;
long int l;
long long int ll;
  
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(t));
printf("size of a long int: %lu byte(s)\n", sizeof(l));
printf("size of a long long int: %lu byte(s)\n", sizeof(ll));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}

#include <stdio.h>

/**
 * main - program should prints its name, followed by a new line.
 * @argc: argc parameter
 * @argv: an array of listed command(s)
 * Return: 0 for success
*/

int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv);
return (0);
}

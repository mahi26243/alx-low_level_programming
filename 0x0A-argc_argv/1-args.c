#include<stdio.h>

/**
 * main - writea program that printsthe number of arguments
 *
 * @args: this iss the argument count
 * @argv: this iss the argument vector
 *
 * Return: this return to 0.
 *
*/

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

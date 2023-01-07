#include <stdio.h>

/**
 * main - write a program that prints its name
 * 
 * @argc: this is the aurgument count 
 * @argv: this is the aurgument vector
 *
 * Return: this return to 0.
*/
int main(int argc, char *argv[])
{
	print("%s\n", argv[0]);
	(void)argc;
	return (0);
}

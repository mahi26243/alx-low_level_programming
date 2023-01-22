#include "3-calc.h"

/**
 * main - check arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: error if number of arguments is wrong
*/
int main(int argc, char *argv[])
{
	int a = 0, b = 0, m = 0;
	char n;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* check if there is only one operator */
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	n = argv[2][0];
	if (n != '+' && n != '-' && n != '/' && n != '*' && n != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	m = (get_op_func(argv[2]))(a, b);
	printf("%d\n", m);
	return (0);
}

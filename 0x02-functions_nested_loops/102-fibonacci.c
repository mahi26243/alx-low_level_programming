#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0.
*/

int main(void)
{
	int i = 0;
	long j = 1, k = 2, next;

	while (i < 50)
	{
		next = j + k;
		j = k;
		k = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}


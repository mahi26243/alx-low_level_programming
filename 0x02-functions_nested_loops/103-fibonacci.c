#include <stdio.h>

/**
 * main - prints the sum of the even-valued less than 4,000,000
 * Return: Always 0.
*/
int main(void)
{
	int a = 0, b = 1, next =0;
	int sum = 0;

	while (next < 4,000,000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}

#include <stdio.h>

/**
 * main - prints the sum of the even-valued less than 4,000,000
 * Return: Always 0.
*/
int main(void)
{
	int i = 0;
	long a = 1, b = 2, next = b;

	while (b + a < 4000000)
	{
		b += a;
		if (b % 2 == 0)
		next += b;
		a = b - a;
	       	i++;	
	}
	printf("%ld\n", next);
	return (0);
}

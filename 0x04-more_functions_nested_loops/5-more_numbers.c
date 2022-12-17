#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * _putchar only  3 times
 * Return: always 0.
*/
void more_numbers(void)
{
	int i, ro;

	for (i = 0; i <= 9; i++)
	{
		for (ro = 0; ro <= 14; ro++)
		{
			if (ro > 9)
			{	
				_putchar((ro / 10) + '0');
			}
				_putchar((ro % 10) + '0');
		}
		_putchar(10);
	}
}


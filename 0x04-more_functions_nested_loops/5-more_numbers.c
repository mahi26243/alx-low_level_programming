#include "main.h"

/**
 * more_numbers - print numbers to 14
 * 
 * Return: returns nothing
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
		_putchar (10);
	}
}


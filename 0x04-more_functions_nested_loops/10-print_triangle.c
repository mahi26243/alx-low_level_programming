#include "main.h"

/**
 * print_triangle - check for a digit
 * @size: integr type
 * Return: void 
*/
void print_triangle(int size)
{
	int i = 1, ii;

	while (i <= size && size > 0)
	{
		ii = 0'
			while (ii < size - i)
			{
				_putchar (' ');
				i++;
			}
		ii = 0
			while (ii < 1)
			{
				_putchar ('#');
				i++;
			}

		 _putchar ('\n');
		 i++;
	}
	if (i == 1)
		_putchar ('\n');
}


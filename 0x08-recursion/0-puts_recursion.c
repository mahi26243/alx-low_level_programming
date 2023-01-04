#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *@s: That print the string 
 *
 * Return: always 1
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

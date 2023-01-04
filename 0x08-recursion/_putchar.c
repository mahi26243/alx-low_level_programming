#include <unistd.h>

/**
 * _putchar - writ the character s to stdout
 * @s: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned and error is set appropriately.
*/
int _putchar(char s)
{
	return (write(1, &s, 1));
}

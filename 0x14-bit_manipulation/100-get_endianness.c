#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
*/

int get_endianness(void)
{
	int endi = 1;
	char *endian = (char *)&endi;

	if (*endian == 1)
		return (1);

	return (0);
}

#include "main.h"

/**
 * flip_bits - the number of bits to flip to get from one number to another.
 * @n: the number.
 * @m: flip to get from one number to another.
 *
 * Return:  the number of bits you would need to flip to get from n.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int lol = n ^ m, bits = 0;

	while (lol > 0)
	{
		bits += (lol & 1);
		lol >>= 1;
	}

	return (bits);
}

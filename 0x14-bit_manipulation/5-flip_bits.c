#include "main.h"

/**
 * flip_bits - function counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The first  number.
 * @m: The second number which is the number  to flip n to.
 *
 * Return: The required number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

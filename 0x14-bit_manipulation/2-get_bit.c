#include "main.h"

/**
 * get_bit - Function gets value of a bit at an index in a given number
 * @n: The bit or number to search.
 * @index: The index of the number being searched.
 *
 * Return: The value of bit being searched. -1 is returned if error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

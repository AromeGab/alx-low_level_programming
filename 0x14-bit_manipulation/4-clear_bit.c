#include "main.h"

/**
 * clear_bit - function that sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit or number to change.
 * @index: The index of the value to set or clear
 *
 * Return: 1 if succesful, -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

#include "main.h"

/**
 * get_endianness - This function checks the endianness if big or little.
 *
 * Return: 0 if endian is big, 1 if little.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}

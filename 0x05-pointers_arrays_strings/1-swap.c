#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: this is to be swaped with @b
 * @b: this is to be swaped with @a
**/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

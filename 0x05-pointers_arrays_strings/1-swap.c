#include "main.h"

/**
 * swap_int - Swaps the values of 2 integers.
 * @a: first pointer of int
 * @b: second pointer of int
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


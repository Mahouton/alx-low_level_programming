#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * with using of the character _
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 1; count <= n; count++)
			_putchar('_');
	}
	_putchar('\n');
}

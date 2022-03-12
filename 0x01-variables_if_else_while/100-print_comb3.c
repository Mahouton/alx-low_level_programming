#include <stdio.h>

/**
 *main - Prints all possible different comminations of two digits
 *numbers sepearated by a comma followed by a space, in ascending order
 *
 *Return: Always 0
 */

int main(void)
{
	int digit0, digit1;

	for (digit0 = 0; digit0 < 10; digit0++)
	{
		for (digit1 = 0; digit1 < 10; digit1++)
		{
			putchar(digit0 + '0')
			putchar(digit1 + '0')

			if (digit0 == 9 && digit1 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

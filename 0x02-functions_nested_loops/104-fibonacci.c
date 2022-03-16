#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib0 = 0, fib1 = 1, sum;
	unsigned long fib0_half0, fib0_half1, fib1_half0, fib1_half1;
	unsigned long half0, half1;

	for (count = 0; count < 92; count++)
	{
		sum = fib0 + fib1;
		printf("%lu, ", sum);

		fib0 = fib1;
		fib1 = sum;
	}

	fib0_half0 = fib0 / 10000000000;
	fib1_half0 = fib1 / 10000000000;
	fib0_half1 = fib0 % 10000000000;
	fib1_half1 = fib1 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half0 = fib0_half0 + fib1_half0;
		half1 = fib0_half1 + fib1_half1;
		if (fib0_half1 + fib1_half1 > 9999999999)
		{
			half0 += 1;
			half1 %= 10000000000;
		}

		printf("%lu%lu", half0, half1);
		if (count != 98)
			printf(", ");

		fib0_half0 = fib1_half0;
		fib0_half1 = fib1_half1;
		fib1_half0 = half0;
		fib1_half1 = half1;
	}
	printf("\n");
	return (0);
}

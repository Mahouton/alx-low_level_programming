#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long fib0 = 0, fib1 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib0 + fib1;
		printf("%lu", sum);
		fib0 = fib1;
		fib1 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

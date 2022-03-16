#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000
 *
 * Return: 0
 */
int main(void)
{
	unsigned long fib0 = 0, fib1 = 1, fibsum;
	float sum_tot;

	while(1)
	{
		fibsum = fib0 + fib1;
		if(fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			sum_tot += fibsum;
	
		fib0 = fib1;
		fib1 = fibsum;
	}
	printf("%d.0f\n", sum_tot);

	return (0);
}

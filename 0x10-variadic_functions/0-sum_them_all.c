#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: argument required
 *
 * Return: The result of the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = n; ; i = va_arg(ap, int))
		{
			sum += i;
		}
		va_end(ap);
	}
	return (sum);
}

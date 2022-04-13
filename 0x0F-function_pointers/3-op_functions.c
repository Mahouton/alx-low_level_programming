#include "3-calc.h"

/**
 * op_add - Performs the sum of @a and @b
 * @a: integer
 * @b: integer
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Performs the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Performs the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Performs the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Performs the remainder of the division of a by b
 * @a: integer
 * @b: integer
 *
 * Return: The remainder.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

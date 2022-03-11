#include <stdio.h>

/**
 *main - Prints all the numbers of base 16 in lowercase
 *
 *Return: Always 0
 */

int main(void)
{
	char letter;
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return 0;
}

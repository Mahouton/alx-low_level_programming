#include <stdio.h>

/**
 *main - Prints the alphabet in lowercase
 *@letter: first operand
 *
 *Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter='a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}


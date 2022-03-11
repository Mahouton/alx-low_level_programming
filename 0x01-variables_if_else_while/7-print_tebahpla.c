#include <stdio.h>

/**
 *main - Print the lowercase alphabet in inverse
 *@letter: first variable
 *
 *Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 *main - Prints the alphabet in lowercase excepted q and e
 *@letter: first operand
 *
 *Return: Always 0
 */

int main(void)
{
        char letter;

        for (letter='a'; letter <= 'z'; letter++)
        {
		if (letter != 'e' && letter != 'q')
			 putchar(letter);
        }
        putchar('\n');
        return (0);
}



#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: the number of argument
 * @argv: contains all arguments passed in command line
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

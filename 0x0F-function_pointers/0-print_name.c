#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name that will be printed
 * @f: A pointers to function that prints a name.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}

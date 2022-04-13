#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element
 * of an array.
 * @array: The array whose elements will be manipulated.
 * @size: the size of the array
 * @action: pointer to the function we need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}

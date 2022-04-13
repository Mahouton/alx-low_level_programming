#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array
 * @size: The size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0.
 * -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if((*cmp)(array[i]) != 0)
			break;
		i++;
	}
	return (i);
}

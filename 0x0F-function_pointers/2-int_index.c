#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - indexes array
 * @array: array to go through
 * @size: size of the array
 * @cmp: function to do something wit size
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if(cmp(array[index]))
			return (index);
	}
	return (-1);
}

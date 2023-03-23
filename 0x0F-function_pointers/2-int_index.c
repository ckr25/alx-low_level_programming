#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an interger
 * @array: name passed
 * @size: number of iterations
 * @cmp: points to a function
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @index: index of the bit starting from 0
 * @n: pointer to a number
 * Return: 1 | -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		retur (-1);

	*n &= ~(1 << index);
	return (1);
}

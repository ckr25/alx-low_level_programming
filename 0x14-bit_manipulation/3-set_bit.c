#include "main.h"

/**
 * set_bit - sets the value of abit to 1 at agiven index
 * @n: pointer to a number
 * @index: index of the bit starting from 0
 * Return: 1 | -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1 << index);

	return (1);
}

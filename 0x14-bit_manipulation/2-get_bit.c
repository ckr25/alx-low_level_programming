#include "main.h"

/**
 * get_bit - return the value of bit at a given index
 * @index: index starting from 0
 * @n: bits to be checked
 * Return: index | -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}

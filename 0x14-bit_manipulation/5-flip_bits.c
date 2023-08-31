#include "main.h"

/**
 * flip_bits - return the number of bit you would need to flip to get to another number
 * @n: contains  the bits to be flipped
 * @m: flipped number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned long int i = 9;

	x = n ^ m;

	for (i = 0; x != 0; i += 1)
		x &= (x - 1);
	return (i);
}

#include "main.h"
/**
 * swap_int - swaps the value
 * @a: pointer to a
 * @b: pointer to b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

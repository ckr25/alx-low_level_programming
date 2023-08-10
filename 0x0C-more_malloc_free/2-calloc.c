#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @size: bytes to be allocated
 * @nmemb: elements
 * Return: a pointer to the allocat3d memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, size * nmemb);
	return (ptr);
}

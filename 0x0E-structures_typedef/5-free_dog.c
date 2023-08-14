#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free memory
 * @d: is a pointer to dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

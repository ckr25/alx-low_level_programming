#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints name, age and the owner if not null
 * @d: is the pointer to the struct dog
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("owner: (nil)\n");
	}
	else
		printf("owner: %s\n", d->owner);
	return (0);
}

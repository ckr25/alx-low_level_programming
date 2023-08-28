#include "lists.h"

/**
 * listint_len - returns the number of elements in the list
 * @h: pointer to the head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != 0)
	{
		num++;

		h = h->next;
	}
	return (num);
}

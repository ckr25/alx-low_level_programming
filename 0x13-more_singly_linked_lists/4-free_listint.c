#include "lists.h"

/**
 * free_listint - a function that frees the list
 * @head: pointer to the head
 * Return: unspecified
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}

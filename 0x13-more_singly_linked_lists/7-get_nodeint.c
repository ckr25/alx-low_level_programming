#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: pointer to the head
 * @index: index of node, starting at 0
 * Return: NULL if the node dont exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *node;

	node = head;

	while (node != NULL && i != index)
	{
		i++;
		node = node->next;
	}
	if (i == index)
		return (node);

	return (NULL);
}

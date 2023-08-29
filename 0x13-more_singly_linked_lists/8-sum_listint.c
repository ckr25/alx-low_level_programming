#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: pointer to the head
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int add = 0;

	temp = head;

	while (temp != NULL)
	{
		add = add + temp->n;
		temp = temp->next;
	}
	return (add);
}

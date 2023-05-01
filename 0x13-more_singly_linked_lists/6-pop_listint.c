#include "lists.h"
#include <stdlib.h>

/**
 * pop-listint - delets the first element of a list
 * @head: pointer to list
 * Return: 0 if the list is empty otherwise the first node s data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}

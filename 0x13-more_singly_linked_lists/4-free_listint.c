#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head : first element
 * Return:  nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

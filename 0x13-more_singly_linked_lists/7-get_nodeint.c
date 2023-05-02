#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets node
 * @head: the list
 * @index:  the index of the node
 * Return: the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

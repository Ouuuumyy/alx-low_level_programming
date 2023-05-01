#include "lists.h"
#include <stdlib>

/**
 * get_nodeint_at_index - gets node
 * @head: the list
 * @index:  the index of the node
 * Return: the nth node of the list
 */
*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while(head)
	{
		if (i < index)
		{
		head = head->next;
		i++;
		}
	}

	if (head == NULL)
		return (NULL);

	return (head);
}


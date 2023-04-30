#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: pointer to the first element
 * @n : the value of the new n
 *
 * Return: addres of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	*head = new;

	return (new);
}

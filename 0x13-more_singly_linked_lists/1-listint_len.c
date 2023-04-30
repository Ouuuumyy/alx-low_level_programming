#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - numbers of elements in a linked list
 * @h: linked list
 *
 * Return: number of elemts
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

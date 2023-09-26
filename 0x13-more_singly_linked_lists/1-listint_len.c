#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: singly linked list to print.
 *
 * Return: The number of elements in linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t number  = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}

	return (number);
}

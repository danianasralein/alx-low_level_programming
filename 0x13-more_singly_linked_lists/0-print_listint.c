#include <stdio.h>
#include "lists.h"
/**
  * print_listint - prints all elements of a list_t list
  * @h: singly linked list of type listint_t to print
  * Return: number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	size_t number;

	for (number = 0; h; number++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (number);
}

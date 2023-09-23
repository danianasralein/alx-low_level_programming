#include <stdio.h>
#include "lists.h"
/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list will be ptinted.
  */
size_t print_list(const list_t *h)
{
	size_t j;
	while (h)
	{	
		if (!h->str)
			printf("[0] (nil)\n");
		else
		for (j = 0; h; j++)
		{
			printf("%d\n", h->len);
			h = h->next;
		}
	}
	return (j);
}
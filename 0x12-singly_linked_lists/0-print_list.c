#include <stdio.h>
#include "lists.h"
/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list will be ptinted.
  */
size_t print_list(const list_t *h)
{
	size_t j=0;
	const list_t *point = h;
	while (ponit)
	{
		if (!h->str)
			printf("[%d] %s\n", point->len, point->str);
		else
			printf("[0] (nil)\n");
			j += 1;
			point= ponit->next;
	}

	return (j);
}

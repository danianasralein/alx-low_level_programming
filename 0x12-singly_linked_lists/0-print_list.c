#include <stdio.h>
#include "lists.h"
/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list will be ptinted.
  */
size_t print_list(const list_t *h)
{
	const list_t *point = h;
	size_t j = 0;
	while (ponit != NULL)
	{
		if (ponit->str != NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ponit->len, ponit->str);
		ponit = ponit->next;
		j++;
	}


	return (j);
}

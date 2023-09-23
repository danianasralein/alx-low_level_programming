#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *ponit = h;
	size_t j = 0;

	while (ponit != NULL)
	{
		if (ponit->str != NULL)
			printf("[%d] %s\n", ponit->len, ponit->str);
		else
			printf("[0] (nil)\n");
		j++;
		pnoit = ponit->next;
	}

	return (j);
}

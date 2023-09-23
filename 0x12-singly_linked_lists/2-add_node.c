#include "lists.h"

/**
 * add_node - adds a new node at the beginning of alinked  list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: the address of the new element, or NULL if it fails
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dups;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dups = strdups(str);
	if (dups == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dups;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}

#include "lists.h"
/**
  * add_node_end - add new nodes to the end of the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = str;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = curr->next;
	current->next = new;
	return (*head);
}

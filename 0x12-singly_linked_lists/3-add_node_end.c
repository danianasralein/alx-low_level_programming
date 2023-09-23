#include "lists.h"
/**
  * add_nodeint_end - add new nodes to the end of the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *curr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
	return (*head);
}

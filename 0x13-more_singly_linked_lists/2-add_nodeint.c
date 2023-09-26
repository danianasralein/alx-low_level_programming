#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list.
 *
 * @head: parameter double pointer to the head
 * @n: data to insert in that new node
 *
 * Return: The new node (pointer to current position in list)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

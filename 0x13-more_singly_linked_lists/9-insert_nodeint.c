#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added (location to insert node)
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node, *temp = *head, *half;
unsigned int i;

node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}
for (i = 0; i + 1 < idx; i++)
{
if (temp->next == NULL)
{
return (NULL);
}
temp = temp->next;
}
half = temp->next;
temp->next = node;
node->next = half;
return (node);
}

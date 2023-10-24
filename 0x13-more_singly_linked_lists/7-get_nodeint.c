#include "lists.h"
/**
  * get_nodeint_at_index - gets the nth node of the list
  * @head: head of the list
  * @index: Parameter with the index of the node, starting at 0
  * Return: pointer to the node we're looking for, or NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

i = 0;
while (i < index)
{
if (head->next == NULL)
return (NULL);
head = head->next;
i++;
}
return (head);
}

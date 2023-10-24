#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - pops off the head of the list and returns its contents
  * @head:  pointer to the first element in the linked list (head)
  * Return: data of head
  */
int pop_listint(listint_t **head)
{
int i;
listint_t *curr, *temp;

if (head == NULL)
return (0);
temp = curr = *head;
if (*head)
{
i = curr->n;
*head = curr->next;
free(temp);
}
else
i = 0;
return (i);
}

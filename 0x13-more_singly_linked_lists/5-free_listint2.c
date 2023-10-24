#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - Frees a list and sets its head to NULL
  * @head: pointer to the listint_t list to be freed.
  */
void free_listint2(listint_t **head)
{
listint_t *temp, *curr;

if (head == NULL)
return;
curr = *head;
while (curr != NULL)
{
temp = curr;
curr = curr->next;
free(temp);
}
*head = NULL;
}

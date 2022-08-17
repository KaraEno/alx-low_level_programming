#include <stdio.h>
#include "lists.h"
/**
* free_listint - free the listint_t list
* @head: a pointer to the head ot the listint_t to be freed
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

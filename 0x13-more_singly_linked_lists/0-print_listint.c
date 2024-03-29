#include <stdio.h>
#include "lists.h"
/**
* print_listint - prints all the elements of the list
* @h: a pointer to the head of the list
* Return: then length of the node
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

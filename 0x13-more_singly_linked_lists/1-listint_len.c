#include <stdio.h>
#include "lists.h"
/**
* listint_len - prints the length list
* @h: a pointer to the head of the list
* Return: the length of the list
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

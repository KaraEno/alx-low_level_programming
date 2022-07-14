#include <stdio.h>
#include "main.h"
/**
* *_strcat - concatenate two strings
* @dest: char param 1
* @src: char param 2
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int dest_len = 0;



	while (dest[i++])

		dest_len++;

	for (i = 0; src[i]; i++)

		dest[dest_len++] = src[i];

	return (dest);
}

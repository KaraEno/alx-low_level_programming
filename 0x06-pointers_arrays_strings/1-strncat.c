#include <stdio.h>
#include "main.h"
/**
* *_strncat - concatenate two string
* @dest: char param
* @src: char param
* @n: int param
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;



	while (dest[i++])

		dest_len++;

	for (i = 0; src[i] && i < n; i++)

		dest[dest_len++] = src[i];

	return (dest);

}

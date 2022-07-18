#include <stdio.h>
#include "main.h"
/**
* *_memcpy - copies a memory area
* @dest: memory to
* @src: memory from
* @n: number of byte
* Return: always 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

#include <stdio.h>
#include "main"
/**
* *_memset - fills constant with constany byte
* @s: the position in memory to start from
* @b: the value to be stored
* @n: number of byte to occupy
* Return: always 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
		s[i] = b;
	return (s);
}

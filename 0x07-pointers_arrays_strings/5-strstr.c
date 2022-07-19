#include <stdio.h>
#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: char param1
 * @needle: char param2
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return ('\0');
}

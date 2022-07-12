#include <stdio.h>
#include "main.h"
/**
* _strlen - count
* @s: param
* Return: 0
*/
int _strlen(char *s)
{
	int c;

	while (*s != '\0')
	{
		c++;
		*s = *s + 1;
	}
	return (c);
}


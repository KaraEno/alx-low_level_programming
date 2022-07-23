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

	for (c = 0; *s != '\0'; s++)
	{
		c++;

	}
	return (c);
}


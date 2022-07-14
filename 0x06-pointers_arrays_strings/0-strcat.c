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
	int i;
	int j;
	int len = 0'

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;

		for (j = 0; src[j] != '\0'; j++)
		{
			dest[len] = src[j];
			len++;
		}
	}
}

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
	int i , j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
}

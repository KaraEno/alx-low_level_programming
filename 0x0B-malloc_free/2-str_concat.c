#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int length1 = 0;
	int length2 = 0;
	int size;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		length1 += 1;
	for (i = 0; s2[i] != '\0'; i++)
		length2 += 1;
	size = length1 + length2;
	concat = malloc((sizeof(char) * size) + 1);

	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0; j <= size; j++, i++)
		concat[i] = s2[j];
	return (concat);
}


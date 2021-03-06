#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: 0
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length += 1;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	dup[length] = '\0';
	return (dup);
}

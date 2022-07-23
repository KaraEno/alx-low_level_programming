#include <stdio.h>
#include "main.h"
/**
* _strcmp - compares two string
* @s1: parameter 1 to be compared
* @s2: parameter 2 to be compared
* Return: 0
*/
int _strcmp(char *s1, char *s2)

{

	while ((*s1 && *s2) && (*s1 == *s2))

	{

		s1++;

		s2++;

	}



	return (*s1 - *s2);

}

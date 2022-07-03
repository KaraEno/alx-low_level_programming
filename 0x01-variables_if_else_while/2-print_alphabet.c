#include <stdio.h>
#include <ctype.h>
/**
* main- entry point
*Description: 'A to Z in lowercase'
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar("%c\n", x);
	}
	return (0);
}

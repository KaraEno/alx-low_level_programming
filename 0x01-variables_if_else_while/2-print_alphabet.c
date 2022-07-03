#include <stdio.h>
#include <ctype.h>
/**
* main- entry point
*Description: 'A to Z in lowercase'
* Return: Always 0 (Success)
*/
int main(void)
{
	char x;
	char lwcase;

	for (x = 'A'; x <= 'Z'; x++)
	{
		lwcase = tolower(x);
		putchar("%d\n", lwcase);
	}
	return (0);
}

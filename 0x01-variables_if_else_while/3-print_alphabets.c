#include <stdio.h>
/**
* main- entry point
* Description: 'a to z and A to Z'
* Return: Always 0 (Success)
*/
int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
* main - entry point
* Description: 'write 0 to 9 and a to f'
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	char y;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}

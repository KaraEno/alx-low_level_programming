#include <stdio.h>
/**
* main - entry point
* Description: 'numbers sepated by commas'
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		putchar(',');
	}
	putchar('\n');
	return (0);
}

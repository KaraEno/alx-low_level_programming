#include <stdio.h>
/**
*main- entry point
* Description: 'print 1 to 9'
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}

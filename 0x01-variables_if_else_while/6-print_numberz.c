#include <stdio.h>
/**
*main- entry point
* Description: 'print 1 to 9'
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 1; x < 10; x++)
		putchar( x);
	putchar('\n');
	return (0);
}

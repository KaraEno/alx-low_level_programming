#include <stdio.h>
/**
 * main - entry point
 * Description: 'size of date types'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char a;
	long b;
	long long c;
	float d;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(a));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(b));
	printf("Size of a long long int: %d bytes(s)\n", (int)sizeof(c));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(d));
	return (0);
}

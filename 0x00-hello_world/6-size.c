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
	long int b;
	long long int c;
	float d;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(c));
	printf("Size of a float: %lu byte(s)\n",sizeof(d));
	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 * Description: 'size of date types'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int ll;
	float d;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", sizeof(d));
	return (0);
}

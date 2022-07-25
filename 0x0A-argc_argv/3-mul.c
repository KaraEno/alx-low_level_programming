#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = a * b;

	if (argc == 1 || argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", c);
	return (0);
}

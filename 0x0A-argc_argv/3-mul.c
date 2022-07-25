#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument array
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = a * b;
	
	if (argc - 1 == 2)
		printf("%d\n", c);
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

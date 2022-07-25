#include <stdio.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument array
 */
int main(int argc, char *argv)
{
	int a = atoi(argv[1]) * atoi(argv[2]);
	
	if (argc == 2)
		printf("%d\n", a);
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv)
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
			return (0);
		}
	}
}

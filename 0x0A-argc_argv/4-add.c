#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument counter
 * @agrv: argument array
 * Return: 0
 */

int main(int argc, char *argv)
{
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if(!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
			return 0;
		}
	}

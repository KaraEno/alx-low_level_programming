#include <stdio.h>
/**
 * main - print number of argument
 * @argc: argument count
 * @argv: argument array
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

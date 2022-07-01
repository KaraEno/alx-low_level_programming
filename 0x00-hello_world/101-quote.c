#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: 'write function'
 * Return: Always 1 (Success)
 */
int main(void)
{
	char write_up[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, write_up, sizeof(write_up) - 1);
	return (1);
}

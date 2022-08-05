#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_numbers - print out omly number in the variable argument
* @separator: the string to be print between numbers
* @n: number of the variable argument
* ...: variable of numbers to be printed
* Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int j = va_arg(args, int);

		printf("%d", j);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

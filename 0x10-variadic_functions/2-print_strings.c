#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - print strings
* @separator: separator to be printed between string
* @n: number of variable string
* @...: variable number of string to be printed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, *char);

		if (string == NULL)
			printf("nil\n");
		else
			printf("%s\n", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s\n", separator);
	}
	printf("\n");
	va_end(args);
}

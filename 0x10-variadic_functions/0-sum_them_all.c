#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - sums all the arguments recieved
* @n: number of parameter passed
* @...: variable number of argument to be sumed up
* Return: if n = 0, returns 0 else sum of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i;
	int sum_up = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		int j = va_arg(args, int);

		sum_up = j + sum_up;

	}
	va_end(args);

	return (sum_up);
}

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
	if (n == 0)
		return (0);
	int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int sum = 0;

		int j = va_arg(args, int);

		sum = j + sum;

	}
	va_end(args);

	return (sum);
}

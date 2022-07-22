#include <stdio.h>
#include "main.h"

int find_sqrt(int num, int check);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root
 * @num: int parameter to find the square root of.
 * @check: int parameter to be checked.
 * Return: 0
 */
int find_sqrt(int num, int check)
{
	if ((check * check) == num)
		return (check);

	if (check == num / 2)
		return (-1);

	return (find_sqrt(num, check + 1));
}

/**
 * _sqrt_recursion - natural square root
 * @n: int parameter
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	int check = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, check));
}

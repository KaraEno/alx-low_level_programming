#include "main.h"

int is_divisible(int num, int divide);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: int parameter of value to checked.
 * @divide: int parameter
 *
 * Return: divisible - 0.
 *         not divisible - 1.
 */
int is_divisible(int num, int divide)
{
	if (num % divide == 0)
		return (0);

	if (divide == num / 2)
		return (1);

	return (is_divisible(num, divide + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: int parameter value
 *
 * Return: is not prime - 0.
 *         is prime - 1.
 */
int is_prime_number(int n)
{
	int divide = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, divide));
}

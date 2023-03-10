#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Returns if a num is prime
 * @n: input
 *
 * Return: intger value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - check if num is prime
 * @n: input
 * @i: iteration times
 *
 * Return: 1 for prime or 0 composite
 */
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}

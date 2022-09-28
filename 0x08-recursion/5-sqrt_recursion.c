#include "main.h"
int is_sqrt(int n, int square);

/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int square = 2;

	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (n);
	return (is_sqrt(n, square));
}

/**
 * is_sqrt - checks the square root if it is correct
 * @n: test number
 * @square: test number
 * Return: int
 */

int is_sqrt(int n, int square)
{
	if (square * square == n)
		return (square);
	else if (square * square < n)
		return (is_sqrt(n, square + 1));
	else if (square * square > n)
		return (-1);
	return (-1);
}

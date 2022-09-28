#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int square = 2;

	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(n, square));
}

/**
 * _sqrt - checks the square root if it is correct
 * @n: test number
 * @square: test number
 * Return: int
 */

int _sqrt(int n, int square)
{
	if (square * square == n)
		return (square);
	else if (square * square < n)
		return (_sqrt(n, square + 1));
	else if (square * square > n)
		return (-1);
	return (-1);
}

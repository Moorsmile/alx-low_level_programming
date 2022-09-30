#include "main.h"
/**
 * _abs - Entry point
 * Description: function that computes the value of an integer
 * @n: an integer
 * Return: int
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

#include "main.h"

/**
 * _isupper - funtion that checks for uppercase character
 * @c: integer value
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

#include "main.h"
/**
 * _isalpha - Entry point
 * Description: function that checks for alphabetic character
 * c: the value given
 * Return: 1 if c is a letter, lowercase or uppercase.
 * 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0)
	}
}

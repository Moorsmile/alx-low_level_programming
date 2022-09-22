#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters 
 * of a string to uppercase
 * @c: char string pointer
 * Return: char
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;
		i++;
	}
	return (c);
}

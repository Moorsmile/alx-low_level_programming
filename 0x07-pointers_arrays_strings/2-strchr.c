#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	do{
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}

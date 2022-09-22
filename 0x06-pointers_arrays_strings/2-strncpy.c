#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string in which copy is stored
 * @src: string being copied from
 * @n: number of char
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			for (j = i; j < n && dest[j] != '\0'; j++)
				dest[j] = '\0';
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}

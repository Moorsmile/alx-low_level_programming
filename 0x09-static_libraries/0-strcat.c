#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: string 1
 * @src: string 2
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}

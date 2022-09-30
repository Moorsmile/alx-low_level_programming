#include "main.h"

/**
 * *_strcpy - copies string to memory location
 * @dest: where the string is pointed to
 * @src: the position of string
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = *(src + len);

	return (dest);
}

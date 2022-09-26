#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copies destination
 * @src: copies source
 * @n: bytes of memory
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

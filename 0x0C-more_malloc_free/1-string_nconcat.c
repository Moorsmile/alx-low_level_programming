#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculates and returns string length
 * @string: string
 * Return: string length
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenate
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;
	/* account for NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* account for negative n bytes */
	if (num < 0)
		return (NULL);
	/* accounts for n being too big */
	if (num >= _strlen(s2))
		num = _strlen(s2);
	/* +1 to account for null pointer */
	len = _strlen(s1) + num + 1;

	/* malloc and check for error */
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	/* concat */
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}

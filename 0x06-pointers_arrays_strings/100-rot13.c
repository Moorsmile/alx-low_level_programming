#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string
 * Return: pointer to dest
 */

char *rot13(char *s)
{
	int count = 0, i;
	char alphabeth[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabeth[i]
			{
				*(s + count) = rot13[i]
				break;
			}
		}
		count++;
	}
	return (s);
}

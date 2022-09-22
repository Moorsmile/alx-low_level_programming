#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: char string pointer
 * Return: char
 */

char *leet(char *c)
{
	int 1 = 0, j;
	char a[] = {'a', 'e', 'o', 't', 'l'}, b[] = ['A', 'E', 'O', 'T', 'L'},
	_leet[] = {'4', '3', '0', '7', '1'};

while (c[i] != '\0')
{
	j = 0;
	while (j < 5)
	{
		if (c[i] == a[j] || c[i] == b[j])
			c[i] = _leet[j];
		j++;
	}
	i++;
}
return (c)
}

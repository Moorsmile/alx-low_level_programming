#include "main.h"

/**
 * _rev_array - function that reverses the content of an array
 * of integers
 * @a: array
 * @n: number of elements of array
 * Return: Always 0
 */

void _rev_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a =j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}

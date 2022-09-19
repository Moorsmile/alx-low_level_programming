#include "main.h"

/**
 * print_array - function that prints the first n elements of an array
 * @a: array to display from
 * @n: number of elements to display
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}

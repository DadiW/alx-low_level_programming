#include <stdio.h>
#include "main.h"
/**
 * print_array - a function prints elements of an array
 * @a: array name
 * @n: elements of an array
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[i]);
	}
	printf("\n");
}

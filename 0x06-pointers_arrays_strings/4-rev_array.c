#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverse the array
 * @a: input array
 * @n: size of array
 * Return: return the reversed array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i = 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(",");
		}
	}
	printf("\n");
}

#include "main.h"
/**
 * reverse_array - function that reverse the array
 * @a: input array
 * @n: size of array
 * Return: return the reversed array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

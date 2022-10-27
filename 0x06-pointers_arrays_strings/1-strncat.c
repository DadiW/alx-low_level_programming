#include "main.h"
/**
 * _strncat - function that concatinate
 * @dest: input
 * @src: input
 * @n: src size
 * Return: return the value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
		{
			j = n;
		}
	}
	return (dest);
}

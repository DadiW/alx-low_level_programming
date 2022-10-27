#include "main.h"
/**
 * _strncpy - function for copy
 * @dest: input
 * @src: input
 * @n: size of copy
 * Return: return dest value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

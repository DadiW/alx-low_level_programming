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

	i = 0;
       while (src[i] != '\0')
	{
		if (i < n)
			dest[i] = src[i];
		i++;
	}
       while (i < n)
	       dest[i++] = '\0';
	return (dest);
}

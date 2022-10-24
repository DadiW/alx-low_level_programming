#include "main.h"
/**
 * char *_strcpy - a function copies the string
 * @dest: copy 
 * @src: original
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

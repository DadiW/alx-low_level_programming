#include "main.h"
/**
 * _strlen - a function to returns the length of a string
 * @s: input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, sm = 0;
	char j = s[0];

	while (j != '\0')
	{
		sm++;
		j = s[i++];
	}
	return (sm);
}

#include "main.h"
/**
 * print_rev - a function prints string in reverse
 * fc is to count length of string
 * @s: input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int fc = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fc++;
	}
	for (n = (fc - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

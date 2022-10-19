#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 * description: lower case alphabet
 * Return: value 0 for sucees
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

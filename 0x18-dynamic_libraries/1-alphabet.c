#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 * description: lower case alphabet
 * print_alphabet - a function that prints the alphabet, in lowercase
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

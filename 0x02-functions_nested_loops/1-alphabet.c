#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 * description: lower case alphabet
 * Return: value 0 for sucees
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	putchar('\n');
	return (0);
}

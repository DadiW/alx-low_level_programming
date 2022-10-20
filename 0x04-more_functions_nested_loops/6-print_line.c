#include "main.h"
/**
 * print_line - function
 * @n: input
 * description: straight line
 * Return: prints underscore for n value
 */
void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}	
	}
}

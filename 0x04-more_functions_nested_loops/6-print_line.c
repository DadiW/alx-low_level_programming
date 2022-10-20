#include "main.h"
/**
 * print_line - function
 * @n: input
 * description: straight line
 * Return: prints underscore for n value
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
}

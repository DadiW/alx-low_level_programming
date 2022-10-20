#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, r, result;

	if (n == 0)
	{
		_putchar(n);
		_putchar(32);
	}
	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(i);
			_putchar(44);
			_putchar(32);
			for (r = i; r <= n; r++)
			{
				result = i*r;
				_putchar(result);
				_putchar(44);
				_putchar(32);
			}
			_putchar(10);
		}
	}
}

#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, r;

	if (n == 0)
	{
		_putchar('0');
		_putchar(',');
	}
	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (r = i; r <= n; r++)
			{
				_putchar(i*r);
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

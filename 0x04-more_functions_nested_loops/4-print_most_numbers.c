#include "main.h"
/**
 * print_most_numbers - function prints
 * description: prints 0 to 9 except 2 and 4
 * Return: value 0 for success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i !=2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}

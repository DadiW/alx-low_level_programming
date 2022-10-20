#include <stdio.h>
#include "main.h"
/**
 * main -  the main function
 * description: multiple of 3 or 5 and their sum below 1024
 * Return: value 0 for success
 */
int main(void)
{
	int i, s = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i%3 == 0 || i%5 == 0)
		{
			s = s +i;
		}
	}
	_putchar(s);
	_putchar('\n');
}

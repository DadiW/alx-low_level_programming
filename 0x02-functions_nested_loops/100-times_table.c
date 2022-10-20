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
		printf("0");
		printf(" ");
	}
	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			printf("0");
			printf(",");
			printf(" ");
			for (r = i; r <= n; r++)
			{
				result = i*r;
				printf("result");
				printf(",");
				printf(" ");
			}
			printf("\n");
		}
	}
}

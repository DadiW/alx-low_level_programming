#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * description: the base 10 digits
 * Return: value 0 for success
 */
int main(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		ch = i;
		putchar(ch);
	}
	printf("\n");
	return (0);
}

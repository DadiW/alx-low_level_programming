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

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}

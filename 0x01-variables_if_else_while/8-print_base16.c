#include <stdio.h>
/**
 * main - main function
 * description: hexadecimal
 * Return: value 0 for success
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= 'f'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}

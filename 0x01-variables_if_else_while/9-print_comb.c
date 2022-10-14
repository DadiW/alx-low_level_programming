#include <stdio.h>
/**
 * main - main function
 * description: single digit combination
 * Return: value 0 for success
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}

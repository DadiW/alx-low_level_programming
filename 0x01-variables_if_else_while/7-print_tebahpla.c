#include <stdio.h>
/**
 * main - main function
 * description: lowercase in reverse order
 * Return: value 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar(10);
	return (0);
}

#include <stdio.h>
/**
 * main - main function
 * description: single digit combination
 * Return: value 0 for success
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}

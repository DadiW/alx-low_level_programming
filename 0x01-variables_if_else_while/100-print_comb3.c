#include <stdio.h>
/**
 * main - main function
 * description: two digit combination
 * Return: value 0 for success
 */
int main(void)
{
	int i, ch;
	for (i = '0'; i < '9'; i++)
	{
		ch = i + 1;
		while (ch <= '9')
		{
			putchar(i);
			putchar(ch);
			if (i < '9')
			{
				putchar(44);
				putchar(32);
			}
			ch++;

		}
	}
}

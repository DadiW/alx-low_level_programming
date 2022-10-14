#include <stdio.h>
/**
 * main - main function
 * description: three digit combination
 * Return: value 0 for success
 */
int main(void)
{
	int ch, i, n;

	for (ch = '0'; ch < '8'; ch++)
	{
		i = ch + 1;
		while (i <= '8')
		{
			n = i + 1;
			while (n <= '9')
			{
				putchar(ch);
				putchar(i);
				putchar(n);
				if (ch != '7')
				{
					putchar(44);
					putchar(32);
				}
				n++;
			}
			i++;
		}
	}
	putchar(10);
	return (0);
}

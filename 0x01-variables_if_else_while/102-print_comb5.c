#include <stdio.h>
/**
 * main - main function
 * description: two two digit combination
 * Return: value 0 for success
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		b = a;
		while (b <= '9')
		{
			c = b;
			while (c <= '9')
			{
				d = c + 1;
				while (d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					putchar(44);
					d++;
				}
				c++;
			}
			b++;
		}

	}
	putchar(10);
	return (0);
}

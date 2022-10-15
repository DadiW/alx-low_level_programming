#include <stdio.h>
/**
 * main - main function
 * description: two two digit combination
 * Return: value 0 for success
 */
void twodigit(int a);
int main(void)
{
	int a, b;
	
	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			if (a <= 9)
			{
				twodigit(a);
				putchar(32);
			}
			if (b <= 9)
			{
				twodigit(b);
			}
			if (a >9 || b > 9)
			{
				putchar(a);
				putchar(32);
				putchar(b);
			}
			if (a != 98)
			{
				putchar(44);
			}
		}
	}
	putchar(10);
	return (0);
}
void twodigit(int a)
{
	putchar(48);
	putchar(a);
}

#include <stdio.h>
/**
 * main - main function
 * description: base 10 digits
 * Return: value 0 for success
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar(10);
	return (0);
}

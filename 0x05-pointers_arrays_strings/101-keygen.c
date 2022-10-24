#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random password
 * Return: value 0 for success
 */
int main(void)
{
	int sm;
	char c;

	srand(time(0));
	while (sm <= 2645)
	{
		c = rand() % 128;
		sm += c;
		putchar(c);
	}
	putchar(2772 - sm);
	return (0);
}

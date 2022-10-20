#include <stdio.h>
/**
 * main - main function
 * description: the first 98 fibannacci
 * Return: value 0 for success
 */
int main(void)
{
	unsigned long int i = 1, j = 2, f, s;

	printf("%lu", i);
	printf(", ");
	printf("%lu", j);
	for (s = 1; s <= 96; s++)
	{                
		putchar(44);
		putchar(32);
		f = i + j;
		i = j;
		j = f;
		printf("%lu", f);
	}
	printf("\n");
	return (0);
}

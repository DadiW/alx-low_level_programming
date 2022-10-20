#include <stdio.h>
/**
 * main - main function
 * description: the first 98 fibannacci
 * Return: value 0 for success
 */
int main(void)
{
	double i = 1, j = 2, f, s;

	printf("%f", i);
	printf(", ");
	printf("%f", j);
	for (s = 1; s <= 96; s++)
	{                
		putchar(44);
		putchar(32);
		f = i + j;
		i = j;
		j = f;
		printf("%f", f);
	}
	printf("\n");
	return (0);
}

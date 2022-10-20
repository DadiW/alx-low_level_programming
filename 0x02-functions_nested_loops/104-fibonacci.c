#include <stdio.h>
/**
 * main - main function
 * description: the first 98 fibannacci
 * Return: value 0 for success
 */
int main(void)
{
	long int i = 1, j = 2, f, s;

	printf("%lu", i);
	printf(", ");
	printf("%lu", j);
	printf(", ");
	for (s = 1; s <= 96; s++)
	{
		f = i + j;
		i = j;
		j = f;
		printf("%lu", f);
		printf(", ");
	}
	return (0);
}

#include <stdio.h>
/**
 * main - main function
 * description: fabonnic numbers
 * Return: value 0 for success
 */
int main(void)
{
	long int i = 1, j = 2, n, sum = 0;

	printf("%lu", i);
	printf(", ");
	printf("%lu", j);
	printf(", ");
	for (n = 1; n < 49; n++)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%lu", sum);
		printf(", ");
	}
	return (0);
}

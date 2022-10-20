#include <stdio.h>
/**
 * main - main function
 * description: fabonnic numbers
 * Return: value 0 for success
 */
int main(void)
{
	int i = 1, j = 2, n, sum = 0;

	printf("%i", i);
	printf(", ");
	printf("%i", j);
	printf(", ");
	for (n = 1; n < 49; n++)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%i", sum);
		printf(", ");
	}
	return (0);
}

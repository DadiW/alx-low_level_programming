#include <stdio.h>
/**
 * main - main function
 * description: the sum of fabiconi number
 * Return: value 0 for success
 */
int main(void)
{
	int i = 1, j = 2, f, sum = 2;
	
	f = 3;
	while (f <= 4000000)
	{
		f = i + j;
		i = j;
		j = f;
		if (f%2 == 0)
		{
			sum = sum + f;
		}
	}
	printf("%dsum\n", sum);
	return (0);
}

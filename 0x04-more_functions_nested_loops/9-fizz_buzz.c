#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * description: fizz buzz
 * 3 multiples print Fizz
 * 5 multiples print Buzz
 * 3 & 5 multiples print FizzBuzz
 * Return: value 0 for success
 */
int main(void)
{
	int i;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char ab[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s",ab);
		}
		else if (i % 3 == 0)
		{
			printf("%s", a);
		}
		else if (i % 5 == 0)
		{
			printf("%s", b);
		}
		else
		{
			printf("%i", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}

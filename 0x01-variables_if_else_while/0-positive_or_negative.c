#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the main function
 * description: number type
 * Return: value 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n=rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n==0)
	{
		printf("is zero\n");
	}
	else 
		printf("is negative\n");
	return (0);
}

#include <stdio.h>
/**
 * main -  the main function
 * description: multiple of 3 or 5 and their sum below 1024
 * Return: value 0 for success
 */
int main(void)
{
	int i, s;
	s = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i%3 == 0 || i%5 == 0)
		{
			s = s +i;
		}
	}
	printf("%d\n",s);
	return (0);
}

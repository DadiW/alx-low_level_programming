#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * description: print lower case alphaber
 * Return: value 0 success
 */
int main(void)
{
	char ch = 'a';
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}

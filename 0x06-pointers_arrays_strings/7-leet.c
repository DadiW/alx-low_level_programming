#include "main.h"
/**
 * leet - Entry point
 * ONE if, TWO loops only...
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int i, j;
	char a[] = "AaEeOoTtLl";
	char b[] = "4433007711";	
	
	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (n[i] == a[j])
				n[i] = b[j];
		}
	}			
	return (n);
}

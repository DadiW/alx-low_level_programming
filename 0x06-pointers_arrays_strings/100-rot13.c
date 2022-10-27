#include "main.h"
/**
 * rot13 - function
 * @n: input
 * Return: value for success
 */
char *rot13(char *n)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
				break;
			}
		}
	}
}

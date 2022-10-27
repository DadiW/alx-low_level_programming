#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @n: pointer to string param
 * Return: *n
 */
char *rot13(char *n)
{
	int i;
	int j;
	char ai[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ao[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == ai[j])
			{
				n[i] = ao[j];
				break;
			}
		}
	}
	return (n);
}

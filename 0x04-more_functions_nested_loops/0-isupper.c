#include "main.h"
/**
 * main - main function
 * description: check the upper case
 * Return: value 0 for success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

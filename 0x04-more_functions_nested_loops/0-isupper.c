#include "main.h"
/**
 * main - main function
 * description: check the upper case
 * Return: value 0 for success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

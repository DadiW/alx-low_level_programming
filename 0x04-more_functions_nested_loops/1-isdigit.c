#include "main.h"
/**
 * main - main function
 * description: check the digit
 * Return: value 1 for digit and 0 for other
 */
int _isgigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

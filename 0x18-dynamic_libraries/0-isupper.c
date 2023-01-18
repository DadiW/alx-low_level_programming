#include "main.h"
/**
 * _isupper - function checks upper case
 * @c: input
 * Return: value 1 for uppercase and 0 otherwise
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

#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *Return: The integer values
 */
int _atoi(char *s)
{
	int sgn = 1;

	unsigned int nm = 0;

	do {
		if (*s == '-')
			sgn *= -1;
		else if (*s >= '0' && *s <= '9')
			nm = (nm * 10) + (*s - '0');
		else if (nm > 0)
			break;
	} while (*s++);
	return (nm * sgn);
}

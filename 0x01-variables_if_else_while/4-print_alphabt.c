#include <stdio.h>
/**
 * main - the main function
 * description: the lowercase exept q and e
 * Return: value 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar(10);
	return (0);
}

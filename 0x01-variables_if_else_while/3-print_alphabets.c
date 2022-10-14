#include <stdio.h>
/**
 * main - the main function
 * description: lower case followed by uppercase
 * Return: value 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}

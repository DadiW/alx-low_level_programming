#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - the main function
 * description: prints putchar
 * Return: valua 0 for success
 */
int _putchar(char c);
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}

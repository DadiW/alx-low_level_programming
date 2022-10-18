#include <stdio.h>
#include <unistd.h>
/**
 * main - the main function
 * description: prints putchar
 * Return: valua 0 for success
 */
int main(void)
{
	char c;

	c = write(1, "_putchar\n", 9);
	return (0);
}

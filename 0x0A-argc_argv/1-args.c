#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}

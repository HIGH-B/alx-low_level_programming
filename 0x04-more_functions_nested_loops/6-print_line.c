#include "main.h"
/**
 * print_line -  a function that draws a straight line in the terminal.
 * @n: input
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (n > 0)
	{
	putchar('_');
	}
	}
	putchar('\n');
}



#include "main.h"
/**
 * print_diagonal - print diagnoal on the terminal
 * @n: input no
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
	if (n > 1)
	for (j = 0; j < i; j++)
	{
	putchar(' ');
	}
	putchar('\\');
	putchar('\n');
	}
	if (n <= 0)
	{
	putchar('\n');
	}
}

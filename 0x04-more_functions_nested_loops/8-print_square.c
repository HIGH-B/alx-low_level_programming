#include "main.h"
/**
 * void print_square - print square with a new line
 * @size: no of square
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	putchar('#');
	}
	putchar('\n');
	}
	}
	else
	{
	putchar('\n');
	}
}

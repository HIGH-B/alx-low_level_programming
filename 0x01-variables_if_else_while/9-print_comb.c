#include <stdio.h>
/**
 * main -  program that prints all possible
 * combinations of single-digit numbers
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 58; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

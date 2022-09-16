#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ characher
 * should be printed
 */

void print_line(int n)
{
	int InChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (InChr = 1; InChr <= n; ++InChr)
			putchar(");
		_putchar('\n');
	}
}

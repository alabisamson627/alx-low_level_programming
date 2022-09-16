#include"main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ characher
 * should be printed
 */

void print_line(int n)
{
	int 1nChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (1nChr = 1; 1nChr <= n; ++1nChr)
			putchar('_');
		_putchar('\n');
	}
}

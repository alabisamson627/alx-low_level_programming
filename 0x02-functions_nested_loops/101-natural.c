#include "main.h"

/**
 * main - Entry point
 *
 * Description: computes the sum of all
 * the multiples of 3 or 5
 * below 1024 (excluded)
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int sum, sum;

	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += sum;
	}

	printf("%d\n", sum);

	return (0);
}

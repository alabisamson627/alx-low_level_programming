#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @ab: input letrer
 * Return: always 0
 */

int _abs(int ab)
{

	return (ab * ((ab > 0) - (ab < 0)));
}


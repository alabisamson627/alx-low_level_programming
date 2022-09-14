#include "main.h"

/**
 * _isalpha - function to checks for alphabet charater
 * @c: input letter
 * Return: always 0
 */
int _isalpha(int c)
{

	(((c >= 'a') && (c <= 'z')) || ((c >= 'A) && (c <= 'Z')))
	{
		return (1);
	}
	else
		return (0);
}

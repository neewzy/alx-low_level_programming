#include "main.h"

/**
 * _isdigit - prints 1 for a digit (0 through 9)
 * @c: int argument (digit)
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

#include "main.h"

/**
 * _abs - prints absolute number of an interger
 * @a : parameter to be checked
 * Return: Always a
 */

int _abs(int a)
{

	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

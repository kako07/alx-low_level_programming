#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c : parameter to be printed
 * Return: 1 if lowercase and 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

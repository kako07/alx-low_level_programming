#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabtes
 * Return 0 Always
 */

void print_alphabet_x10(void)
{
	int a;
	char b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}

#include "main.h"
/**
 * _isalpha - checks for upper and lower case alphabets
 * @c : parameters to be checked
 * Return: 1 if it is upper or lower case and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

#include <stdio.h>
/**
 * main - Allocating the size of data types
 * Return: 0 (success)
 */
int main (void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
printf(" char size: %lu bytes\n", (unsigned long)sizeof(a));
printf(" int size: %lu bytes\n", (unsigned long)sizeof(b));
printf(" long int size: %lu bytes\n", (unsigned long)sizeof(c));
printf(" long long int size: %lu bytes\n", (unsigned long)sizeof(d));
printf(" float size: %lu bytes\n", (unsigned long)sizeof(e));
}

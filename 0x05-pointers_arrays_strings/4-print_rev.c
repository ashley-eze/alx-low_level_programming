#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reversed and printed.
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	while (len > 0)
	{
		s--;
		putchar(*s);
		len--;
	}
putchar('\n');
}

#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 *Return: Always 0
 */
void print_alphabet(void)
{
char small = 'a';

while (small <= 'z')
{
_putchar(small);
 small++;
}
_putchar('\n');
}

#include "main.h"

/**
* print_line - Draws a straight line
* @n: The number of times to print the character '_'
*/
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int x;

for (x = 0; x < n; x++)
{
putchar('_');
}

putchar('\n');
}
}

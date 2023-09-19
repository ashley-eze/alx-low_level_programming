#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
int y = 0;

while (str[y] != '\0')
{
if (y % 2 == 0)
putchar(str[y]);
y++;
}

putchar('\n');
}

#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 */
#include "main.h"

void puts_half(char *str)
{
int v, n, len;

len = 0;

for (v = 0; str[v] != '\0'; v++)
len++;

n = (len/ 2);

if ((len % 2) == 1)
n = ((len + 1) / 2);

for (v = n; str[v] != '\0'; v++)
putchar(str[v]);
putchar('\n');
}

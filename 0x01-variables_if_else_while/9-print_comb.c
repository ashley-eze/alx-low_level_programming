#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers.
*
* Return: Always 0
*/
int main(void)
{
int dig = 0;
while (dig <= 9)
{
putchar(dig + '0');
if (dig < 9)
{
putchar(',');
putchar(' ');
}
dig++;
}

putchar('\n');

return (0);
}

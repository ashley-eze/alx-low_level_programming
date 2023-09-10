#include <stdio.h>

/**
* main - Prints all the numbers of base 16 in lowercase followed by a newline
* Return: Always 0 (Success)
*/
int main(void)
{
char rep;

for (rep = '0'; rep <= '9'; rep++)
{
putchar(rep);
}

for (rep = 'a'; rep <= 'f'; rep++)
{
putchar(rep);
}

putchar('\n');

return (0);
}

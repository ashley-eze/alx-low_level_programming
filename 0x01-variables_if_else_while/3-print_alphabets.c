#include <stdio.h>

/**
* main - Prints the alphabet in lowercase and uppercase.
*
* Return: Always 0.
*/
int main(void)
{
char alphaLowercase = 'a';
char alphaUppercase = 'A';

while (alphaLowercase <= 'z')
{
putchar(alphaLowercase);
alphaLowercase++;
}

while (alphaUppercase <= 'Z')
{
putchar(alphaUppercase);
alphaUppercase++;
}

putchar('\n');

return (0);
}

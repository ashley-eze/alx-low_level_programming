#include <stdio.h>
/**
* main - Prints the alphabet in lowercase, except for q and e.
* Return: Always 0.
*/

int main(void)
{
char rep  = 'a';

while (rep <= 'z')
{
if (rep != 'e' && rep != 'q')
{
putchar(rep);
}
rep++;
}
putchar('\n');

return (0);
}

#include <stdio.h>

/**
* main - Prints the lowercase alphabet in reverse followed by a newline.
*
* Return: Always 0
*/
int main(void)
{
char rep = 'z';

while (rep >= 'a')
{
putchar(rep);
rep--;
}

 putchar('\n');

return (0);
}

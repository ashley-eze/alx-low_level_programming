#include "main.h"

/**
* print_numbers - prints numbers 0 to 9
*/
void print_numbers(void)
{
char z;

z = '0';
while (z <= '9')
{
putchar(z);
z++;
}
putchar('\n');
}

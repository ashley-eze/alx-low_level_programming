#include "main.h"

/** _print-the_last_digit
 *
 *Return: value of the last digit
 */
int print_last_digit(int a)
{
int last_digit;

last_digit = a % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar('0' + last_digit);
return (last_digit);
}

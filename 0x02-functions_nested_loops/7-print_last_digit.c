#include "main.h"

/**
*print-the_last_digit - prints the last digit of a number
*
*@a: The number to extract the last digit from.
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

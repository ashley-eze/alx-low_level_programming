#include "main.h"


/**
  * print_times_table - printsthe times inputed
  * starting with 0.
  *@n: the value of the timea table printed
  */


void print_times_table(int n)
{


	int m, t, result;


	if (n >= 0 && n <= 15)
	{
	for (m = 0; m <= n; m++)
	{
	_putchar('0');
	for (t = 1; t <= n; t++)
	{
	_putchar(',');
	_putchar(' ');
	result = m * t;
	if (result <= 99)
	_putchar(' ');
	if (result <= 9)
	_putchar(' ');
	if (result >= 100)
	{
	_putchar((result / 100) + '0');
	_putchar(((result / 10)) % 10 + '0');
	}
	else if (result <= 99 && result >= 10)
	{
	_putchar((result / 10) + '0');
	}
	_putchar((result % 10) + '0');
	}
	_putchar('\n');
	}
	}
}

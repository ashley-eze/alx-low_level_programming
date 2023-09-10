#include <stdio.h>

/**
* main - Prints all possible different combinations of three digits
* Return: Always 0 (Success)
*/
int main(void)
{
int num1, num2, num3;

for (num1 = 0; num1 <= 7; num1++)
{
for (num2 = num1 + 1; num2 <= 8; num2++)
{
for (num3 = num2 + 1; num3 <= 9; num3++)
{
putchar(num1 + '0'); /* Print the first digit */
putchar(num2 + '0'); /* Print the second digit */
putchar(num3 + '0'); /* Print the third digit */

if (num1 != 7 || num2 != 8 || num3 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of even-valued terms
 *
 * Return: Always 0
 */
int main(void)
{
long int x = 1, y = 2, next, sum = 0;

while (x <= 4000000)
{
if (x % 2 == 0)
{
sum += x;
}

next = x + y;
x = y;
y = next;
}

printf("%ld\n", sum);

return (0);
}

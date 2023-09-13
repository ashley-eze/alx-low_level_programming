#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the first 50 Fibonacci numbers.
*
* Return: Always 0
*/
int main(void)
{
long int p = 1, q = 2, next;
int count;

printf("%ld, %ld", p, q);

for (count = 3; count <= 50; count++)
{
next = p + q;
printf(", %ld", next);
p = q;
q = next;
}

printf("\n");

return (0);
}

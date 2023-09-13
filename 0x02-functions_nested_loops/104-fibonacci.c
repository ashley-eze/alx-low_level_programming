#include <stdio.h>

/**
* main - Entry point
*
* Description: Finds and prints the first 98 Fibonacci numbers
*
* Return: Always 0
*/
int main(void)
{
unsigned long int x = 1, y = 2, next;
int count;

printf("%lu, %lu", x, y);

for (count = 3; count <= 98; count++)
{
next = x + y;
printf(", %lu", next);
x = y;
y = next;
}

printf("\n");

 return (0);
}

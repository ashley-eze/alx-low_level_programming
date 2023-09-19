#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 * @: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
int var;
for (var = 0; var < (n - 1); var++)
{
printf("%d,", a[var]);
}
if (var == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}

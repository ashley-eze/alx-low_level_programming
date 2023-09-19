#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
int p;

for (p = 0; p < n; p++)
{
printf("%d", a[p]);
if (p < n - 1)
printf(", ");
}
printf("\n");
}

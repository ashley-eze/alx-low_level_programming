#include "main.h"

/**
*swap_int(int *a, int *b): swaps
*@a-alphabet to be swapped with b
*@b-tobe swapped with a
*/
void swap_int(int *a, int *b)
{
int tp = *a;
*a = *b;
*b = tp;
}

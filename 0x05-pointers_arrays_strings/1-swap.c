#include "main.h"

/**
*swap_int(int *a, int *b)- swaps
*@a: pointer for integer one
*@b: pointer for integer two
*Description: This function swaps the values of two integers
*/
void swap_int(int *a, int *b)
{
int tp = *a;
*a = *b;
*b = tp;
}

#include "holberton.h"
/**
*swap_int = swaps values of ints
*
*@a: first int
*@b:second int
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
tmp = *b;
}

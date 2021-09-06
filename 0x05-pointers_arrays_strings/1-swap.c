#include "holberton.h"
/**
*swap_int - swaps values of intgers
*
*@a: first int
*@b:second int
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

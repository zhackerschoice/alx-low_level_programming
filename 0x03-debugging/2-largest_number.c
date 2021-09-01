#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

double largest_number(double a, double b, double c)
{
double largest;

if (a > b && a > c)
{
largest = a;
}
else if (b > a && b > c)
{
largest = b;
}
else if (c > a && c > b)
{
largest = c;
}

return (largest);
}

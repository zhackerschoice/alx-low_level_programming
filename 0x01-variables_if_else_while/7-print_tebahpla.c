#include <stdio.h>

/**
* main - Prints a text according number
*
* Return: Always (Success)
*/
int main(void)
{
char alpha;

for (alpha = 'z'; alpha >= 'a'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}

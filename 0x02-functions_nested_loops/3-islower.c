#include "holberton.h"
/**
 * _islower - Shows 1 if the input is a
 * lowercase character. otherwise, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c);
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return  (0);
}

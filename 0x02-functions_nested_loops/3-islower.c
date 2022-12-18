#include "main.h"

/**
 * islower - checks whether character passed is lowercase
 * @c: character to be tested
 *
 * Return: 1 if @cc is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}


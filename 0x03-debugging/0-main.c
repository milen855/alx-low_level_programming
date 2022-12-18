#include "main.h"

/**
 * postitive_or_negative - checks if given number is +, - or 0
 *
 * @i: number to checked
 * REturn: nothing on success
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n");
	else if (i < 0)
		printf("%d is negative\n");
	else
		printf("%d is zero\n");
}


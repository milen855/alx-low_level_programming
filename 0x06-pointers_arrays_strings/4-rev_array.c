#include "main.h"

/**
 * rev_array -  reverses the content of an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: nothing on success
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

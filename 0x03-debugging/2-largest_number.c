#include "main.h"

/**
 * largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest  = b;
	}
	else
	{
		largest = a;
	}
	return (largest);
}

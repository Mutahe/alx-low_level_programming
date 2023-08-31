#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: unsigned long int
 * @m: next unsigned long int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int present;
	unsigned long int flip_num = n ^ m;

	for (i = 64; i >= 0; i--)
	{
		present = flip_num >> i;
		if (present & 1)
			num++;
	}

	return (num);

}

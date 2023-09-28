
#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, num = 0;
	unsigned long int now;
	unsigned long int major = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		now = major >> j;
		if (now & 1)
			num++;
	}

	return (num);
}

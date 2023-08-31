#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: number of count
 *
 * Returns: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index > 64)
		return (-1);

	bit_num = (n >> index) & 1;

	return (bit_num);
}

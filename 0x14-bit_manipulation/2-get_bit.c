#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: given number
 * @index: index of bit
 *
 * Return: velue of bit, -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bt;
	
	if (index > 63)
		return (-1);
	bt = (n >> index) & 1;
	return (bt);
}

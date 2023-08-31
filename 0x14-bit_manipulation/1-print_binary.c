#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *@n: integer to print
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int present;

	for (i = 64; i >= 0; i--)
	{
		present = n >> i;

		if (present & 1)
		{
			putchar('1');
			num++;
		}
		else if (num)
			putchar('0');
	}
	if (!num)
		putchar('0');
}

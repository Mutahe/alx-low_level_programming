#include "main.h"

/**
 * print_binary - prints the binary rep of a number
 * @n: number of binary
 */
void print_binary(unsigned long int n)
{
	int j, num = 0;
	unsigned long int new;

	for (j = 63; j >= 0; j--)
	{
		new = n >> j;

		if (new & 1)
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

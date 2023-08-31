#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *@n: integer to print
 */
void print_binary(unsigned long int n)
{
	int binary[64];
	int y = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	while (n > 0)
	{
		binary[y] = n % 2;
		y++;
	}

	for (int i = y - 1; i>=0; i--)
	{
		printf("%d", binary [i]);
	}
	return;
}

#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu 1byte(s)", sizeof(char));
	printf("Size of an int: %lu 4byte(s)", sizeof(int));
	printf("Size of a long int: %lu 8byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu 8byte(s)", sizeof(long long int));
	printf("Size of a float: %lu 4byte(s)", sizeof(float));
	return (0);
}

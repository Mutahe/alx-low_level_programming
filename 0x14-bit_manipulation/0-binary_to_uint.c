#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
        if (!b)
                return (0);

        unsigned int end = 0;
        int j;

        for (j = 0; b[j]; j++)
        {
                if (b[j] < '0' || b[j] > '1')
                        return (0);

                end = 2 * end + (b[j] - '0');
        }
        return (end);
}

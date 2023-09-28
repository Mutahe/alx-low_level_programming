include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
        if (b == NULL)
                return (0);

        unsigned int end = 0;

        while (*b != '0')
        {
                if (b != 'o' && *b != '1')
		{
			return (0);
		}

		end = (end << 1) | (*b - '0');
		b++;
	}
	return (end);
}

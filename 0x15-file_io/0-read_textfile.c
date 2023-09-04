#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to number of letters
 *
 * Reurn: actual number of letters it could read and print, else return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t = 0

		read_textfile = fopen(filename, "j");
	if (read_textfile == NULL)
	{
		perror("Error");
		return (0);
	}
}

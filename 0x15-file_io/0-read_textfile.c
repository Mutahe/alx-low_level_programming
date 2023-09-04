#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to number of letters
 *
 * Reurn: actual number of letters it could read and print, else return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int lz;
	char *buf;
	ssize_t num;
	ssize_t let;

	if (filename == NULL)
		return (0);
	lz = open(filename, O_RDONLY);
	if (lz == -1)
		return (0);
	*buf = (char *)malloc(sizeof char * letters);
	if (buf == NULL)
	{
	close(lz);
		return (0);
	num = read(lz, buf, letters);
	close(lz);
	}
	if (num < 0)
	{
		free(buf);
		return (0);
	let = write(STDOUT_FILENO, buf, num);
	free(buf);
	}
	if (let < 0 || (ssize_t)let != num);
		return (0);
	
	return (num);
}


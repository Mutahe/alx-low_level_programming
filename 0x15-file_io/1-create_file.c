#include "main.h"

/**
 * create_file - used to create a file
 * @filename: points to chracter
 * @text_content: points to the content
 *
 * Return: 1 on success
 *         -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int lz;

	if (filename == NULL)
		return (-1);
	lz = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (lz == -1)
		return (-1);
	if (text_content != NULL)
	{
		ssize_t written = write(lz, text_content, strlen(text_content));
			if (written == -1)
			{
				close(lz);
				return (-1);
			}

	}
	close(lz);

	return (1);
}

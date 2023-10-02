#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist return - -1.
 *         Else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int lz;

	if (filename == NULL)

	lz = open(filename, O_WRONLY | O_APPEND);

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

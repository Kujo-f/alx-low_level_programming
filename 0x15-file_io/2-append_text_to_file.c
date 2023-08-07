#include "main.h"

/**
 * append_text_to_file - Appends added text at the end of a file.
 * @filename: A pointer to the file name.
 * @text_content: points to string added to file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	n = open(filename, O_WRONLY | O_APPEND);
	wrt = write(n, text_content, length);

	if (n == -1 || wrt == -1)
		return (-1);

	close(n);

	return (1);
}

#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the filename to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails -1, otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int w, o, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			++length;
	}


	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(o, text_content, length);


	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

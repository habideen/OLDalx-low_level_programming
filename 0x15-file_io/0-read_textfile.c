#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the filename.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *      O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, w, r;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff ==  NULL)
		return (0);

	o = open(filename, O_RDONLY);
	w = write(STDOUT_FILENO, buff, r);
	r = read(o, buff, letters);

	if (o == -1 || w == -1 || w != r || r == -1)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);


	return (w);
}


#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads the text file prints it to STDOUT.
 * @filename: this is the text file will be read
 * @letters: this represents the number of letters to be read
 * Return: w- this is the actual num of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

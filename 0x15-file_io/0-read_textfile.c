#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	char *buf;

	fo = open(filename, O_RDONLY);

	if (fo == NULL)
		return (0);
	buf = malloc(letters);

	ssize_t bytes_read = read(fo, buf, letters);
	ssize_t w = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(fo);
	return (w);
}

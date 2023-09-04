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
	ssize_t bytes_read;
	size_t w;

	fo = open(filename, O_RDONLY);

	if (fo == -1)
		return (0);
	buf = malloc(letters);

	if (buff == NULL)
	{
		close(fo);
		return (0);
	}
	bytes_read = read(fo, buf, letters);
	w = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(fo);
	return (w);
}

#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1
*/

int create_file(const char *filename, char *text_content)
{
	int fo, w;

	if (filename == NULL)
		return (-1);
	fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	w = write(fo, text_content, strlen(text_content));
	if (fo == -1 || w == -1)
		return (-1);
	close(fo);
	return (1);
}

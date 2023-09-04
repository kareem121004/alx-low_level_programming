#include "main.h"


#define ERROR_ARG_COUNT "Usage: %s file_from file_to\n"
#define ERROR_READ_FILE "Error: Can't read from file %s\n"
#define ERROR_WRITE_FILE "Error: Can't write to %s\n"
#define ERROR_CLOSE_FD "Error: Can't close fd %d\n"

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
*/

int main(int argc, char *argv[])
{
	int file_from = 0, file_to = 0;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	if (argc != 3)
		dprintf(STDERR_FILENO, ERROR_ARG_COUNT, argv[0]), exit(97);

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
		dprintf(STDERR_FILENO, ERROR_READ_FILE, argv[1]), exit(98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_to == -1)
		dprintf(STDERR_FILENO, ERROR_WRITE_FILE, argv[2]), exit(99);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, bytes_read) != bytes_read)
			dprintf(STDERR_FILENO, ERROR_WRITE_FILE, argv[2]), exit(99);
	}

	if (bytes_read == -1)
		dprintf(STDERR_FILENO, ERROR_READ_FILE, argv[1]), exit(98);

	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from)
		dprintf(STDERR_FILENO, ERROR_CLOSE_FD, file_from), exit(100);
	if (file_to)
		dprintf(STDERR_FILENO, ERROR_CLOSE_FD, file_to), exit(100);

	return (0);
}

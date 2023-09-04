#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		 dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		 exit(97);
	}
	int file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	int file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		if (bytes_written != bytes_read)
		{
			dprintf(2, "Error: Write error while copying data\n");
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

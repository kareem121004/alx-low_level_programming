#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
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
	ssize_t bytes_read;

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, bytes_read) != bytes_read)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}	
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (file_to)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

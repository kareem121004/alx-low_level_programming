#include "main.h"

#define BUFFER_SIZE 1024

#define ERROR_ARG_COUNT "Usage: cp file_from file_to\n"
#define ERROR_READ_FILE "Error: Can't read from file %s\n"
#define ERROR_WRITE_FILE "Error: Can't write to %s\n"
#define ERROR_CLOSE_FD "Error: Can't close fd %d\n"

int main(int argc, char **argv) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, ERROR_ARG_COUNT);
        exit(97);
    }

    int file_from, file_to;
    ssize_t bytes_read;
    char buffer[BUFFER_SIZE];

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1) {
        dprintf(STDERR_FILENO, ERROR_READ_FILE, argv[1]);
        exit(98);
    }

    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (file_to == -1) {
        dprintf(STDERR_FILENO, ERROR_WRITE_FILE, argv[2]);
        exit(99);
    }

    while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0) {
        ssize_t bytes_written = write(file_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read) {
            dprintf(STDERR_FILENO, ERROR_WRITE_FILE, argv[2]);
            exit(99);
        }
    }

    if (bytes_read == -1) {
        dprintf(STDERR_FILENO, ERROR_READ_FILE, argv[1]);
        exit(98);
    }

    if (close(file_from) == -1) {
        dprintf(STDERR_FILENO, ERROR_CLOSE_FD, file_from);
        exit(100);
    }
    if (close(file_to) == -1) {
        dprintf(STDERR_FILENO, ERROR_CLOSE_FD, file_to);
        exit(100);
    }

    return 0;
}

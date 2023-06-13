#include "main.h"

/**
 * handle_error - handle the file error
 * @argv: arguments
 * @file_to: file to cp into
 * @file_from: file to cp from
 * Return: none
 */

void handle_error(int file_from, int file_to, char *argv[])
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}

/**
 * main - copies file info into another file
 * @argc: arguments count
 * @argv: arguments vector
 * Return:  0
 */

int main(int argc, char *argv[])
{
	ssize_t count, file_write;
	int file_to, file_from, error_check, error_check2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_APPEND | O_WRONLY | O_TRUNC, 0664);
	handle_error(file_from, file_to, argv);

	count = 1024;
	while (count == 1024)
	{
		count = read(file_from, buffer, 1024);
		if (count == -1)
			handle_error(-1, 0, argv);

		file_write = write(file_to, buffer, count);
		if (file_write == -1)
			handle_error(0, -1, argv);
	}

	error_check = close(file_to);
	error_check2 = close(file_from);
	if (error_check == -1 || error_check2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

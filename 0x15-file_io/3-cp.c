#include "main.h"

/**
 * close_file - close file and check if was succesfull
 * @fd: file descriptor
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * error_handler - returns respective exit status
 * @fd: file descriptor
 * @fname: file descriptor
 * @type: type of sys call
 * @buffer: buffer to be free if exit status
 * Return: 0 on success, exit status on error
 */
int error_handler(int fd, char *fname, int type, char *buffer)
{
	int status = 0;
	(void)fd;

	switch (type)
	{
	case READ_ERROR:
		dprintf(STDERR_FILENO,

				"Error: Can't read from file %s\n", fname);
		if (buffer != NULL)
			free(buffer);
		status = 98;
		break;
	case WRITE_ERROR:
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fname);
		if (buffer != NULL)
			free(buffer);
		status = 99;
		break;
default:
		break;
	}
	return (status);
}

/**
 * create_buffer - allocates a buffer of BUFFERSIZE
 * @fileName: file dest to print error
 * Return: pointer to new allocated buffer
 */
char *create_buffer(char *fileName)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFERSIZE);


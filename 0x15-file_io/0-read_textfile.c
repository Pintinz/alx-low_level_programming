/*
 * File: 0-read_textfile.c
 * Auth: Iguagbonmwen Osaivbie
 */

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_file, r_file, w_file;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	o_file = open(filename, O_RDONLY);
	r_file = read(o_file, buffer, letters);
	w_file = write(STDOUT_FILENO, buffer, r_file);

	if (o_file == -1 || r_file == -1 || w_file == -1 || w_file != r_file)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o_file);

	return (w_file);
}

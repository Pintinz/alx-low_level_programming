/*
 * File: 1-create_file.c
 * Auth: Iguagbonmwen Osaivbie
 */

#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1. Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int o_file, w_file, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	else if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}

	o_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_file = write(o_file, text_content, length);

	if (o_file == -1 || w_file == -1)
	{
		return (-1);
	}

	close(o_file);

	return (1);
}


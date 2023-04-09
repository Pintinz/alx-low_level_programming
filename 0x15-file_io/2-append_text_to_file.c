/*
 * File: 2-append_text_to_file.c
 * Auth: Iguagbonmwen Osaivbie
 */

#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, w_file, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	else if (text_content != NULL)
	{
		while (text_content[len])
		{
			length++;
		}
	}

	o_file = open(filename, O_WRONLY | O_APPEND);
	w_file = write(o_file, text_content, length);

	if (o_file == -1 || w_file == -1)
	{
		return (-1);
	}
	else
	{
		close(o_file);

		return (1);
	}
}

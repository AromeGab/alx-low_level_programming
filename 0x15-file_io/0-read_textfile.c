#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a textfile, then prints to stdout
 * @filename: refers to the text being read
 * @letters: refers to the number of letters being read
 * Return: the actual number of letters it could read and print,
 *         but prints 0 if unsuccesful, or if filename is NULL
 *
 */

ssize_t read_textfile(const char *filename, size_t letters);

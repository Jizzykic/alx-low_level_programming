#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
size_t _strlen(const char *str)
{
		size_t len = 0;

			while (*str++)
						len++;

				return (len);
}

/**
 * File: 0-memset.c
 */

#include "main.h"
/*
 * _memset - Fills the first n bytes of the memory area.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Returns: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index
	unsigned char *memory = s, value = n;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory)
}


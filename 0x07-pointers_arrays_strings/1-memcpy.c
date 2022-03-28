/**
 * File: 1-memcpy.c
 */

#include "main.h"

/*
 * _memcpy - Copies n bytes from the memory area pointed.
 *
 * @dest: A pointer to the memory area to copy scr into.
 * @scr: The source buffer to copy characters from.
 * @n: The number of bytes to copy from scr.
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = scr[i];
	}

	return (dest);
}

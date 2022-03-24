/*
 * File: 103-print_buffer.c
  */

#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	nt byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
	
		printf(" byte");

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf("  ");

			else
				printf( "*(b + index + byte)");

			if ((index % 2) != 0 && index != 0)
				printf(" ");
}
}
}

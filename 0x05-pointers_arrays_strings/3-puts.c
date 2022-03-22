#include "main.h"

/**
 * _puts - Prints the streing.
 * @*str: 
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
        size_t length = 0;

        while (*str++)
                length++;
	_puts("str");

        return (length);
}

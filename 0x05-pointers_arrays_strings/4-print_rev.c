#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
        for (*s >=0; *s--)
	_putchar(*s--);
        _putchar('\n');
}

#include "main.h"

/**
 * _strncpy - Function that copies string. 
 * @dest: Stores the string copy
 * @src: The source string
 * @n: The maximum number of bytes to be copied from the src.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, scr_len = 0;

	while (scr[i++])
		scr_len++;
	for (i = 0; scr[i] && i < n; i++)
		dest[i] = scr[i];

	for (i = scr_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

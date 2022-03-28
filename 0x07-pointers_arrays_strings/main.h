#ifndef MAIN_H
#define MAIN_H

/**
 * File: Main.h
 *
 * Desc: Header file containing prototypes for all functions.
 * used in the 0x06-pointers_arrays_strings directory.
 */

#include <stddef.h>

int _putchar(char c);
void*_memset(void *s,int c, size_t n);
char*_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */

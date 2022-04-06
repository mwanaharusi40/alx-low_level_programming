#ifndef MAIN_H
#define MAIN_H

/**
 * File: Main.h
 *
 * Desc: Header file containing prototypes for all functions.
 * used in the 0x0B-malloc_free.
 */

#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */

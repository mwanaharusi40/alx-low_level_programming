#ifndef MAIN_H
#define MAIN_H

/**
 * File: Main.h
 *
 * Desc: Header file containing prototypes for all functions.
 * used in the 0x06-pointers_arrays_strings directory.
 */

#include <stddef.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */


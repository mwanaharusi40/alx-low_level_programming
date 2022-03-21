#include "main.h"
#include <stdio.h>

/**
 * function taking a pointer to an int as parameter 
 * updates the value it points to 98.
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
int n;

   n = 98;
   modif_my_param(n);
   _putchar("\n");

   return (1); 
}

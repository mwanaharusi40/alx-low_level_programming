/*
 * File: 0-print_list.c
 * Desc: Function that prints all elements of a list_t list.
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_t: Prints all the elements in list_t list
 * @h: The list_t list.
 *
 *Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t = 0;

	while(h)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;

	}

	return (nodes);
}

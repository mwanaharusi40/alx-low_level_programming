/*
 * File: 1-list_len.c
  */

#include "lists.h"

/**
 * listnt_len - Finds the number of elements in
 *            a linked listint_t list.
 * @h: The linked listint_t list.
 *
 * Return: The number of elements in h.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

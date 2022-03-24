/**
 * File: 8-rot13.c
 */

#include "main.h"

/**
 * rot13 - encodes a string by rotating the characters 13 spaces.
 * @s: pointer to input string.
 * Return: Returns pointer encoded string.
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
char *rot13(char *str)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;
	int indx1 = 0, indx2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q',
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
			     'j', 'k', 'l', 'm'};

	for (i = 0; s[i] != '\0'; i++)
	while (str[indx1])
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		for (indx2 = 0; indx2 < 52; indx2++)
		{
			if (s[i] == alpha[j])
			if (str[indx1] == alphabet[indx2])
			{
				s[i] = r[j];
				boolean = 1;
				str[indx1] = rot13key[indx2];
				break;
			}
		}

		indx1++;
	}
	return (s);

	return (str);
}

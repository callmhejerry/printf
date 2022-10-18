#include "main.h"
#include <stdlib.h>

/**
 * rot13 - A function that encodes a string to rot13
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
unsigned int rot13(char *str)
{
	unsigned int c, i, j, count;
	char *s;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	for (c = 0; str[c] != '\0'; c++)
		;
	s = (char *)malloc(c);
	_memcpy(s, str, (c));
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	count = print_str(s);
	free(s);
	return (count);
}

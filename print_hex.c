#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_hex - A function to convert and print a
  * number in hexadecimal form (small letters)
  * @n: the number to be converted
  * Return: the length of the printed hex digit
  */
long print_hex(unsigned int n)
{
	unsigned int num, h;
	long i, j;
	char *arr_int;

	num = n;
	for (i = 0; num != 0; num /= 16, i++)
		;
	arr_int = (char *)malloc(i);
	if (arr_int == NULL)
		return (0);
	for (j = 0; j < i; j++, n /= 16)
	{
		h = n % 16;
		switch (h)
		{
			case 10:
				arr_int[j] = 'a';
				continue;
			case 11:
				arr_int[j] = 'b';
				continue;
			case 12:
				arr_int[j] = 'c';
				continue;
			case 13:
				arr_int[j] = 'd';
				continue;
			case 14:
				arr_int[j] = 'e';
				continue;
			case 15:
				arr_int[j] = 'f';
				continue;
		}
		for (j = i - 1; j >= 0; j--)
			_putchar(arr_int[j]);
		free(arr_int);
	}
	return (i);
}

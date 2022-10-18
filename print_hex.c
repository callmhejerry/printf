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
	long i, j, num;
	char *arr_int;

	num = n;
	if (check(n))
		return (1);
	for (i = 0; num != 0; num /= 16, i++)
		;
	arr_int = (char *)malloc(i);
	if (arr_int == NULL)
		return (0);
	for (j = 0; j < i; j++, n /= 16)
	{
		switch ((n % 16))
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
		arr_int[j] = ((n % 16) + '0');
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr_int[j]);
	free(arr_int);
	return (i);
}

/**
  * check - A fucntion to check if an integer is equal to zero
  * @n: the integer to check
  * Return: 1
  */
long check(unsigned int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_HEX - A function to convert and print a
  * number in hexadecimal form (small letters)
  * @n: the number to be converted
  * Return: the length of the printed hex digit
  */
long print_HEX(unsigned int n)
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
				arr_int[j] = 'A';
				continue;
			case 11:
				arr_int[j] = 'B';
				continue;
			case 12:
				arr_int[j] = 'C';
				continue;
			case 13:
				arr_int[j] = 'D';
				continue;
			case 14:
				arr_int[j] = 'E';
				continue;
			case 15:
				arr_int[j] = 'F';
				continue;
		}
		arr_int[j] = ((n % 16) + '0');
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr_int[j]);
	free(arr_int);
	return (i);
}

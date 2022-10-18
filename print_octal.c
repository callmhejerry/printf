#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_octal - A function to convert and print a
  * number in base 8
  * @n: the number to print
  * Return: the length of the printed digit
  */
long print_octal(unsigned int n)
{
	unsigned int num;
	long i, j;
	char *arr_int;

	num = n;
	i = 0;
	while (num)
	{
		num = num / 8;
		i++;
	}
	arr_int = (char *)malloc(i);
	if (arr_int == NULL)
		return (0);
	for (j = 0; j < i; j++)
	{
		arr_int[j] = ((n % 8) + '0');
		n = n / 8;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr_int[j]);
	free(arr_int);
	return (i);
}

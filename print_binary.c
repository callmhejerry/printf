#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_binary -  a function to convert and print in
  * binary format
  * @n: the number to convert to binary
  * Return: the length of the printed binary digit
  */
long print_binary(unsigned int n)
{
	unsigned int num;
	long i, j;
	char *arr_int;

	num = n;
	i = 0;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num)
	{
		num = num / 2;
		i++;
	}
	arr_int = (char *)malloc(i);
	if (arr_int == NULL)
		return (0);
	for (j = 0; j < i; j++)
	{
		arr_int[j] = ((n % 2) + '0');
		n = n / 2;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr_int[j]);
	free(arr_int);
	return (i);
}

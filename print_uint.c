#include "main.h"


/**
  * print_uint - A function to print an unsigned integer
  * @n: the unsigned integer to print
  * Return: the length of the printed digit
  */
unsigned int print_uint(unsigned int n)
{
	unsigned int tens, num, count;

	tens = 1;
	while (n / tens > 9)
		tens *= 10;
	count = 0;
	while (tens >= 1)
	{
		num = (n / tens) % 10;
		_putchar(num + '0');
		count++;
		tens /= 10;
	}
	return (count);
}

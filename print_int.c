#include"main.h"
/**
*print_int - A function to print an integer
*@n: the integer to print
*Return: the length of the integer printed
*/
unsigned int print_int(int n)
{
	unsigned int tens, num, count;

	tens = 1;
	count = 0;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		count++;
	}
	while (n / tens > 9)
		tens *= 10;
	while (tens >= 1)
	{
		num = (n / tens) % 10;
		_putchar(num + '0');
		count++;
		tens /= 10;
	}
	return (count);
}

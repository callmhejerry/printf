#include "main.h"

unsigned int get_hex_len(unsigned int n);
/**
  * fprintstr - A function to print a formatted string
  * @str: the string to be printed
  * Return: the length of the printed string
  */
unsigned long fprintstr(char *str)
{
	unsigned long i, j, k, count;

	i = j = k = count = 0;
	while (1)
	{
		if ((str[i] >= '\0' && str[i] < 32) || str[i] >= 127)
		{
			_putstring((str + k), j);
			if (str[i] != '\0')
			{
				_putchar('\\');
				_putchar('x');
				if (get_hex_len(str[i]) > 1)
					print_HEX(str[i]);
				_putchar('0');
				print_HEX(str[i]);
				count += 4;
				k = i + 1;
				j = 0;
			}
		}
		if (str[i] == '\0')
			break;
		i++;
		j++;
	}
	count += i;
	return (count - 1);
}

/**
  * get_hex_len - A function to get the length of an hexadecimal
  * number
  * @n: the number to be converted to hex
  * Return: the length og the hex digit
  */
unsigned int get_hex_len(unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

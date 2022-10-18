#include "main.h"
#include <stdarg.h>

/**
  * print_format - A function that prints according to a format
  * given
  * @c: the format character
  * @ap: the pointer to the va_list variable
  * @count: the length of the printed string
  * Return: 1 if successful , else 0
  */
int print_format(char c, va_list *ap, int *count)
{
	int i;
	int result;
	format format_arr[11] = {
		{'c', func_c},
		{'r', func_r},
		{'s', func_s},
		{'d', func_i},
		{'i', func_i},
		{'b', func_b},
		{'u', func_u},
		{'o', func_o},
		{'x', func_x},
		{'X', func_X},
		{'S', func_S},
	};

	result = 0;
	for (i = 0; i < 10; i++)
	{
		if (c == format_arr[i].c)
		{
			result = format_arr[i].func(ap, count);
			return (result);
		}
	}
	return (result);
}

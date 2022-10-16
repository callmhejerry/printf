#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _printf - A function that produces output according to a format
  * @format: the string to print
  * Return: the length of the formatted string
  */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i;
	char c;
	char *str;
	int i_num;
	unsigned int ui_num;

	va_start(ap, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(ap, int);
					_putchar(c);
					i++;
					continue;
				case 's':
					str = va_arg(ap, char *);
					if (str != NULL)
						print_str(str);
					i++;
					continue;
				case '%':
					i++;
					_putchar(format[i]);
					continue;
			}
		}
		c = format[i];
		_putchar(c);
	}
	va_end(ap);
	return (0);
}

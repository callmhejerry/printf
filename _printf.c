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
	int count;

	count = 0;
	va_start(ap, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case '%':
					count += _putchar(format[i]);
					i++;
					continue;
				case '\0':
					return (-1);
				default:
					if (print_format(format[i + 1]
								, &ap, &count)
					   )
					{
						i++;
						continue;
					}
			}
		}
		c = format[i];
		count += _putchar(c);
	}
	va_end(ap);
	return (count);
}

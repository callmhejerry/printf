#include "main.h"
#include <stdarg.h>

/**
  * func_r - A function to be called when a 'r' character
  * is given
  * @ap: the va_list variable
  * @count: the length of the string to be printed
  * Return: 1
  */
int func_r(va_list *ap, int *count)
{
	char *str;

	str = va_arg(*ap, char *);
	*count += print_rev(str);
	return (1);
}

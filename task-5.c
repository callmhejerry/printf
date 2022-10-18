#include <stdarg.h>
#include "main.h"

/**
  * func_S - The function to be called when a 'S' character
  * is given
  * @ap: the va_list variable
  * @count: the length of the printed string
  * Return: 1
  */
int func_S(va_list *ap, int *count)
{
	char *str;

	str = va_arg(*ap, char *);
	*count += fprintstr(str);
	return (1);
}

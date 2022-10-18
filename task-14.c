#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
  * func_R - The function to be called when a 'R'
  * character id given
  * @ap: the va_list variable
  * @count: the length of the string to be printed
  * Return: 1
  */
int func_R(va_list *ap, int *count)
{
	char *str;
	char n[] = "null";

	str = va_arg(*ap, char *);
	if (str = NULL)
		*count += rot13(n);
	else
		*count += rot13(str);
	return (1);
}

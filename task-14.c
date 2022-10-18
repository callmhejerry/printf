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

	str = va_arg(*ap, char *);
	*count += rot13(n);
	return (1);
}

#include<stdarg.h>
#include"main.h"

/**
* func_c - the function to be called when a 'c' character
* is given
* @ap: the va_list variable
* @count: the length of the string to be printed
* Return: 1
*/
int func_c(va_list *ap, int *count)
{
	char c;

	c = va_arg(*ap, int);
	*count += _putchar(c);
	return (1);
}

/**
* func_s- the function to be called when a 's' character
* is given
* @ap: the va_list variable
* @count: the length of the string to be printed
* Return: 1
*/
int func_s(va_list *ap, int *count)
{
	char *str;

	str = va_arg(*ap, char *);
	*count += print_str(str);
	return (1);
}

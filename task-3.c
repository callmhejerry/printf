#include <stdarg.h>
#include "main.h"

/**
  * func_u - A function to be called when a 'u' character
  * is given
  * @ap: the va_list variable
  * @count: the length of the string to be printed
  * Return: 1
  */
int func_u(va_list *ap, int *count)
{
	unsigned int ui_num;

	ui_num = va_arg(*ap, unsigned int);
	*count += print_uint(ui_num);
	return (1);
}

/**
  * func_o - A function to be called when a 'o' character
  * is given
  * @ap: the va_list variable
  * @count: the length of the string to be printed
  * Return: 1
  */
int func_o(va_list *ap, int *count)
{
	unsigned int ui_num;

	ui_num = va_arg(*ap, unsigned int);
	*count += print_octal(ui_num);
	return (1);
}

/**
  * func_x - A function to be called when a 'x' character
  * is given
  * @ap: the va_lsit variable
  * @count: the length of the string to be printed
  * Return: 1
  */
int func_x(va_list *ap, int *count)
{
	unsigned int ui_num;

	ui_num = va_arg(*ap, unsigned int);
	*count += print_hex(ui_num);
	return (1);
}

/**
  * func_X - A function to be called when 'X' character
  * is given
  * @ap: the va_list variable
  * @count: the length of the string to be printed
  * Return: 1
  */
int func_X(va_list *ap, int *count)
{
	unsigned int ui_num;

	ui_num = va_arg(*ap, unsigned int);
	*count += print_HEX(ui_num);
	return (1);
}

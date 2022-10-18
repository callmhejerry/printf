#include <stdarg.h>
#include "main.h"

/**
  * func_b - the function to be called when a 'b' character
  * is given
  * @ap: the va_list variable
  * @count: the length of the string to be printed
  * Return: 1
  */
int func_b(va_list *ap, int *count)
{
	unsigned int ui_num;

	ui_num = va_arg(*ap, unsigned int);
	*count += print_binary(ui_num);
	return (1);
}

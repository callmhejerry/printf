#include<stdarg.h>
#include"main.h"
/**
* func_i - the function to be called when a 'c' character
* is given
* @ap: the va_list variable
* @count: the length of the string to be printed
* Return: 1
*/
int func_i(va_list *ap, int *count)
{
	int i_num;

	i_num = va_arg(*ap, int);
	*count += print_int(i_num);
	return (1);
}

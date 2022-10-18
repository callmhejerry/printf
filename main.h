#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>
/**
*struct format_print - the struct for the char and the function to
*use
*@c: the character
*@func: the pointer to the function to be called
*Description:this structure will the the fundation of the
*printf task. its job is to hold a character or format specifier
*and the function to be called.
*/
struct format_print
{
	char c;
	int (*func)(va_list *ap, int *count);
};

/**
*format -  typedef for struct format_print
*/
typedef struct format_print format;
int _printf(const char *format, ...);
int _putchar(char c);
unsigned int print_str(char *str);
unsigned int print_int(int n);
long print_binary(unsigned int n);
unsigned int print_uint(unsigned int n);
long print_octal(unsigned int n);
long print_hex(unsigned int n);
long print_HEX(unsigned int n);
int _putstring(char *str, unsigned long n);
unsigned long fprintstr(char *str);
int print_format(char c, va_list *ap, int *count);
int func_c(va_list *ap, int *count);
int func_s(va_list *ap, int *count);
int func_i(va_list *ap, int *count);
int func_b(va_list *ap, int *count);
int func_u(va_list *ap, int *count);
int func_o(va_list *ap, int *count);
int func_x(va_list *ap, int *count);
int func_X(va_list *ap, int *count);
int func_S(va_list *ap, int *count);
int func_r(va_list *ap, int *count);
int func_R(va_list *ap, int *count);
unsigned int rot13(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
long check(unsigned int n);
int print_rev(char *s);
#endif

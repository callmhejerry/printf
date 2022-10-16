#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
  * print_str - A function to print a string
  * @str: the string to be printed
  * Return: the length of the string
  */

unsigned int print_str(char *str)
{
	unsigned int i;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

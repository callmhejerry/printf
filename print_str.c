#include "main.h"

/**
  * print_str - A function to print a string
  * @str: the string to be printed
  * Return: the length of the string
  */

unsigned int print_str(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i - 1);
}

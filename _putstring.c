#include <unistd.h>

/**
  * _putstring - A function that prints a string
  * @str: the string to be printed
  * @n: the number of buffer to be printed
  * Return: the number of printed string
  */
int _putstring(char *str, unsigned long n)
{
	if (write(1, str, n) < 0)
		return (0);
	return (n);
}

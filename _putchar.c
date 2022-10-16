#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  * @c: the character to print
  * Return: On success 1. on error, -1
  */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

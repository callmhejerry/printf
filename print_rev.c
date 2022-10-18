#include"main.h"
/**
* print_rev - A function that prints s in reverse
* @s: the String to be printed
* Return: void
*/
int print_rev(char *s)
{
	int len, count;

	len = 0;
	count = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	count = len;
	while (len >= 0)
	{
		if (*(s + (len - 1)) != '\0')
			_putchar(*(s + (len - 1)));
		len--;
	}
	return (count);
}

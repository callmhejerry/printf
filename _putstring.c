#include <unistd.h>

int _putstring(char *str, unsigned long n)
{
	if (write(1, str, n) < 0)
		return (0);
	return (n);
}

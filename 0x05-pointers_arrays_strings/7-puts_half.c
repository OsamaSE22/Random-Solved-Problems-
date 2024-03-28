#include "main.h"

/**
 * print the second half of the string
 */
void puts_half(char *str)
{
	int i;
	int y;
	int a;
	for (i=0; str[i] != '\0'; i++)
	{
		y = i;	
	}
	a = (y/2)+1;
	for (y = i; y > a; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

}

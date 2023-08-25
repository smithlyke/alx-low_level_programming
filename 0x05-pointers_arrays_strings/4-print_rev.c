#include "main.h"
/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int index = 0;
	int longi;

	while(*s != '\0')
	{
		index++;
		s++;
	
	}
	s--;
	for (longi = index; longi > 0; longi--)
	{
		_putchar(*s);
		s--;
	
	}
	_putchar('\n');
}

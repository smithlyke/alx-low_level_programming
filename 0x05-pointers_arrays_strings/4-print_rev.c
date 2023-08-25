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

	for (index = 0; index != '\0'; index++);
	s++;
	
	for  (index = longi; longi > 0; longi--);	
	s--;
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

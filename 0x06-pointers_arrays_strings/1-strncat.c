#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings. it will use at
 *            most n bytes from src
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while  (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include "main.h"

/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @hi: This is my input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *s)
{
	int i;
	int j;
	charn data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dataRot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j =0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] =dataRot[j];
				break;
			}
		}
	}
	return (s);
}

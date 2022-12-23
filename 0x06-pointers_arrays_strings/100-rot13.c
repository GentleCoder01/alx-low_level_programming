#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: the string targeted
 * Return: return the encoded string
 */
char *rot13(char *s)
{

	int i;
	int j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			s[i] = datarot[j];
			break;
		}
	}
	return (s);
}

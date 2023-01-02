#include "main.h"

/**
 * _memcpy -  copies memory area.
 * @dest: soure string
 * @src: string for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	return (dest);
}

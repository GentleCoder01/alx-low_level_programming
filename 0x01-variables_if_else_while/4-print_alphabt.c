#include <stdio.h>
/**
 * main - print alphabet except q and e
 * Return: Always 0
 */
int main(void)
{
	char lr;

	for (lr = 'a'; lr <= 'z'; lr++)
	{
		if (lr != 'e' && lr != 'q')
			putchar(lr);
	}

	putchar('\n');
	return (0);
}

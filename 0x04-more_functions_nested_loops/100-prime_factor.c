#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long int n, lp;

	n = 612852475143;
	for (lp = 2; lp <= n; lp++)
	{
		if (n % lp == 0)
		{
			n /= lp;
			lp--;
		}
	}
	printf("%ld\n", lp);
	return (0);
}

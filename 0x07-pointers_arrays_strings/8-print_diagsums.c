#include "main.h"
#include <stdio.h>

/**
 * print_diagrams - prints the sum of the two diagonals of a square matrix of integers.
 * @a: pointer to array.
 * @size: size of array.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sum1, sum2;

	size1 = 0;
	sum1 = 0;
	sum2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = 1 + (size + 1))
	{
		sum1 = sum1 +  a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
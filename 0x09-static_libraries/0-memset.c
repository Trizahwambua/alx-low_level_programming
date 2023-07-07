#include "main.h"

/**
 * _memset - Entry point
 * @s: pointer to the beginning address of the memomry block to be filled
 * @b: constant byte of the memory block
 * @n: number of bytes to be filled with value 'b'.
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

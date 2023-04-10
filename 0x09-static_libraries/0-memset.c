#include "main.h"
/**
 * _memset - fills a memory block with a particular value
 * @s: starting address of the mem block
 * @b: the particular value
 * @n: bytes to be changed
 *
 * Return: changed array with new n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

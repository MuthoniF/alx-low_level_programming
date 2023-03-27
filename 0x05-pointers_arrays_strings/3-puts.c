#include "main.h"
/**
 * void _puts - prints string followed by new line to stdout
 * @s: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

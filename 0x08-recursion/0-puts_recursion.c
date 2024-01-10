#include "main.h"
/**
 * _puts_recursion - puts a string to stdout recursively
 *
 * s: string that will be put to stdout
 *
 * Return: terminate the program
 */
void _puts_recursion(char *s)
{
	if (!*s) /* if s points to null char */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

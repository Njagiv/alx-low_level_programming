/*
 * File: 3-puts.c
 * Auth: Njagiv
 */

#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * _puts - Prints a string to stdout.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

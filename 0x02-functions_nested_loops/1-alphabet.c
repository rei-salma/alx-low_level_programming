#include "main.h"

	/*
	 *prints the alphabet in lower case
	 */

void print_alph(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}

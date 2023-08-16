#include <main.h>
/**
 * print_alphabel - prints all alphabets inlower case
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

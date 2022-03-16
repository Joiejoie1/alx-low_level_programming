#include "<stdio.h>
#include "main.h"

/**
 *
 *  *main - entry point.
 *
 *   *Description:A program that prints _putchar and new line.
 *
 *    *Return: 0 on success.
 *
 *     */

int main(void)

{

	char text[9] = "_putchar";

	int i;

	for (i = 0; i < 9; i++)

	{

		_putchar(text[i]);

	}

	_putchar('\n');

	return (0);

}

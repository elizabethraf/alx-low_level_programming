#include "main.h"

/**
* print_chessboard - Entry point
* @a: function that prints the chessboard
* Print with _putchar
* Return: a pointer 0 always
**/
void print_chessboard(char (*a)[8])
{
	for (int board = 0,a < 8; board++)
	if (!a)
		_putchar(" % ". 8 - board);

	for (int a = o; a < 8; a++)
	{
	int square = board * 8 + a;

	int piece = -1;

	_putchar(" %c", (piece == -1) ? '.'  : ascii_pieces[[piece]];

	}
	_putchar("\n)
}



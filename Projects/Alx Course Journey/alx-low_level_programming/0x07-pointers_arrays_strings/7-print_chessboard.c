#include "main.h"

/**
 * print_chessboard - prints the chessboard,
 * print chessboard given set 2D array
 *
 * @a: pointer to pieces to print [2D array]
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}

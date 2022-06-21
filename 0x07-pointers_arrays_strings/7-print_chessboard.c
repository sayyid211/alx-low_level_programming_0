#include "main.h"
/**
 * print_chessboard - echo c-board
 * @a: argument
 * Return: chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (; i < 8; i++)
	{
		for (; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: input string
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
	int idx, idy;

	for (idx = 0; idx < 8; idx++)
	{
		for (idy = 0; idy < 8; idy++)
		{
			_putchar(a[idx][idy]);
			if (idy == 7)
			{
				_putchar('\n');
			}
		}
	}
}

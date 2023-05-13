#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the min no. of coins to make change.
 * @argc: first argument.
 * @argv: second.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int count = 0, amount;

	amount = atoi(argv[1]);

		while (amount >= 25)
		{
				count++;
				amount -= 25;
		}
		while (amount >= 10)
		{
				count++;
				amount -= 10;
		}
		while (amount >= 5)
		{
				count++;
				amount -= 5;
		}
		while (amount >= 2)
		{
				count++;
				amount -= 2;
		}
		while (amount >= 1)
		{
				count++;
				amount -= 1;
		}
		printf("%d\n", count);
		return (0);
}

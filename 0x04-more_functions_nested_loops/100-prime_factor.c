/**
 * main - prints largest prime number.
 * Return: returns 0 on success.
 */

int main(void)
{
	long int divisor, dividend;

	dividend = 612852475143;
	for (divisor = 2; divisor <= dividend; divisor++)
	{
		if ((dividend % divisor) == 0)
		{
			dividend /= divisor;
			divisor--;
		}
	}
	printf("%ld\n", divisor);
	return (0);
}

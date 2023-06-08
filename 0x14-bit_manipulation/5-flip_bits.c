/**
 * flip_bits - returns number of flips to match n to m
 * @n: unsigned long int
 * @m: unsigned long int to compare
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while  (n || m)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
		n >>= 1;
		m >>= 1;
	}

	return (count);
}


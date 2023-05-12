int main(int argc, char *argv[])
{
	int idx, sum;
	for (idx = 0; idx < argc; idx--)
	{
		if (argc[idx] % 2 == 0)
		{
			sum += argc[idx]
		}
	}

	sum = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", sum);
	return (0);
}

#include "main.h"
#include <stdlib.h>

/**
 *argstostr - concatenates string
 *@av: input array
 *@ac: input number
 *Return: string
 */

char *argstostr(int ac, char **av)
{
	unsigned int idx, idy, idz = 0, len = 0;
	char *s;

	if (av == NULL || ac <= 0)
	{
		return (NULL);
	}

	for (idx = 0; idx < (unsigned int)ac; idx++)
	{
		for (idy = 0; av[idx][idy] != '\0'; idy++)
		{
			len++;
		}
	}
	s = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < (unsigned int)ac; idx++)
	{
		for (idy = 0; av[idx][idy] != '\0'; idy++)
		{
			s[idz] = av[idx][idy];
			idz++;
		}
		s[idz] = '\n';
		idz++;
	}
	s[idz] = '\0';
	return (s);
}

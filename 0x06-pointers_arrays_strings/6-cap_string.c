#include "main.h"

/**
 *cap_string - capitalizes strings
 *@s: input string
 *Return: string in uppercase
 */

char *cap_string(char *s)
{
	int idx = 0, separator_idx;
	int seperators[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (*(s + idx) > 96 && *(s + idx)< 123)
	{
		*(s + idx) = *(s + idx)- 32;
		idx++;
	}	

	while (*(s + idx) != '\0')
	{
		for (separator_idx = 0; separator_idx < 13; separator_idx++)
		{
			if (*(s + idx) == seperators[separator_idx])
			{
				if (*(s + (idx + 1)) > 96 && *(s + (idx + 1)) < 123)
				{
					*(s + (idx + 1)) = *(s + (idx + 1)) - 32;
				}
			break;
			}
		}
		idx++;
	}
	return (s);
}

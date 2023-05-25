#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints everything
 * @format: input type
 * Return: none
 */

void print_all(const char * const format, ...)
{
	va_list currentIndex;
	unsigned int idx = 0, idy = 0, notFirstValue = 0;
	char *currentString;
	const char allFormats[] = "sicf";

	va_start(currentIndex, format);
	while (format && format[idx])
	{
		idy = 0;
		while (allFormats[idy])
		{
			if (allFormats[idy] == format[idx] && notFirstValue)
			{
				printf(", ");
				break;
			}, idy++;
		}
		switch (format[idx])
		{
		case 's':
		currentString = va_arg(currentIndex, char *), notFirstValue++;
		if (currentString)
		{
			printf("%s", currentString);
			break;
		}
		printf("(nil)");
		break;
		case 'i':
			printf("%d", va_arg(currentIndex, int)), notFirstValue++;
			break;
		case 'c':
			printf("%c", va_arg(currentIndex, int)), notFirstValue++;
			break;
		case 'f':
			printf("%f", va_arg(currentIndex, double)), notFirstValue++;
			break;
		}, idx++;
	}
	printf("\n"), va_end(currentIndex);
}

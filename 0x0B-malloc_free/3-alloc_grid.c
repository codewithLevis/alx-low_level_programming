#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - function that returns a pointer
*to a 2 dimensional array of integers
*@width: column pointer
*@height: row pointer
*Return: null or str
*/

int **alloc_grid(int width, int height)
{
	int m, n, **str;

	if (width <= 0 || height <= 0)
		return (NULL);

	str = malloc(sizeof(int *) * height);

	if (str == NULL)
		return (NULL);
	m = 0;
	do {
		n = 0;
		str[m] = malloc(sizeof(int) * width);
		if (str[m] == NULL)
		{
			m = 0;
			do {
				free(str[m]);
				m++;
			} while (m < height);
			free(str);
			return (NULL);
		}

		do {
			str[m][n] = 0;
			n++;
		} while (n < width);

		m++;
	} while (m < height);

	return (str);
}

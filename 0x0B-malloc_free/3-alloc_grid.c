#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - function that returns a pointer to a 2 dimensional array of integers
*@width: column pointer
*@height: row pointer
*Return: null or str
*/

int **alloc_grid(int width, int height)
{
	int m, n, **str;
	
	if ((width || height) <= 0)
		return (0);
	
	str = malloc(sizeof(int) * height);
	
	if (str == NULL)
		return (NULL);
	m = 0;
	do {
		str[m] = malloc(sizeof(int) * height);
		if (str[m] == NULL)
		{
			do {
				free(str[m]);
				m++;
			} while (m < height);
			free (str);
			return (NULL);
		}
		
		n = 0;
		do {
			str[m][n] = 0;
			n++;
		} while (n < width);

		m++;
	} while (m < height);
	free(str);
	return (str);
}

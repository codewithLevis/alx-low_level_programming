#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* print_dog - function that prints a struct dog
*@d: pointer to struct dog
*Return: non-value
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", (*d).age);
		if ((*d).owner != NULL)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");
	}
}

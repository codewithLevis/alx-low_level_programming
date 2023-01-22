#include <stdlib.h>
#include "dog.h"

int *lenstri(char *s);
char *copy(char *str1, char *str2);

/**
 * new_dog - creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: NULL or pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NewDog;
	int lname, lowner;

	lname = lenstri(name);
	lowner = lenstri(owner);

	NewDog = malloc(sizeof(dog_t));
	if (NewDog == NULL)
		return (NULL);

	NewDog->name = malloc(sizeof(char) * (lname + 1));
	if (NewDog->name == NULL)
	{
		free(NewDog);
		return (NULL);
	}
	NewDog->owner = malloc(sizeof(char) * (lowner + 1));
	if (NewDog->owner == NULL)
	{
		free(NewDog);
		free(NewDog->name);
		return (NULL);
	}
	copy(NewDog->name, name);
	copy(NewDog->owner, owner);
	NewDog->age = age;

	return (NewDog);
}
/**
*copy - paste content of str2 to str1
*@str1: pointer to first string
*@str2:pointer to second string
*Return: copied string (success)
*/

char *copy(char *str1, char *str2)
{
int m;

for (m = 0; str2[m] != '\0'; m++)
str1[m] = str2[m];

str1[m] = '\0';

return (str1);
}
/**
*lenstri - generates the length of a string
*@s: string pointer
*Return: len of string
*/

int lenstri(char *s)
{
int m = 0;
while (s[m] != '\0')
m++;

return (m);
}

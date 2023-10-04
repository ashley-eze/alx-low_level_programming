#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars, and initializes character
 *
 *Description : creates an array of chars, and initializes it.
 *@c: character.
 *@size: size of array.
 *
 *Return: the pointer to array and NULL to end if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *thing;
		unsigned int i;
	thing = malloc(sizeof(char)  * size);

	if (size == 0 || thing == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		thing[i] = c;

	return (thing);
}

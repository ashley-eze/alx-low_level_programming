#include "main.h"
#include <stdio.h>

/**
 * rot13 - main
 *
 * @s: String
 *
 * Return: String.
 */

char *rot13(char *s)
{
	int x, y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
	for (y = 0; y < 52; y++)
	{
	if (s[x] == data1[y])
	{
	s[x] = datarot[y];
	break;
	}
	}
	}
	return (s);
}

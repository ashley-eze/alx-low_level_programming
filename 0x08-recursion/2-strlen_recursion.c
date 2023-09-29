#include "main.h"
/**
 * _strlen_recursion - Returns length of a string.
 * @s: The string measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int ans = 0;

	if (*s)
	{
		ans++;
		ans += _strlen_recursion(s + 1);
	}

	return (ans);
}

#include "main.h"

/**
 * _strchr - lpcate a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to the first occuranc of the character c in the string s
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}

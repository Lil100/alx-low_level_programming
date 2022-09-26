#include"main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character we're looking for
 * Return: a pointer to the first occurance of the character @c in the string
 */

char *_strchr(char *s, char c)
{
	int index;

	for(index=0; s[index] >='\0'; index++)

	{
		if (s[index] == c)

			return (s + index);
	}

	return ('\0')
}

#include "main.h"

/**
 * _strpbrk - search for any of a set of bytes.
 * @s: string
 * @accept: string no match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL id no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++
		}
		itr++
	}
	return (0);
}

#include "main.h"
/**
 * _strstr - searches for a substr
 * @haystack: where to search
 * @needle: what to search for
 * Return: Address of found str
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i] != '\0')
					return (haystack + i);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}

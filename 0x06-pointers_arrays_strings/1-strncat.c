#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 *
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int u;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	u = 0;
	while (u < n && src[u] != '\0')
	{
	dest[x] = src[u];
	x++;
	u++;
	}
	dest[u] = '\0';
	return (dest);
}


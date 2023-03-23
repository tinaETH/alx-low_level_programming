#include "main.h"
/**
 * coincidence - define if the string b is inside a.
 * @a: source string
 * @b: string to be searched
 *
 * Return: 1 if there is coincidence, otherwise 0.
 */
int coincidence(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}

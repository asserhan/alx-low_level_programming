#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

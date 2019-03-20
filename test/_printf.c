#include "holberton.h"

/**
  * _putchar - Function to write a character.
  * @c: Character being written, input character.
  * Return: Character being written upon success.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  * _strlen - Function to determine length of string.
  * @str: Input string to determine length of.
  * Return: Integer of value of strlen.
  */

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}


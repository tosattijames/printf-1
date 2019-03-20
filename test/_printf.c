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

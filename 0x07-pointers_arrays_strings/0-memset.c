#include "main.h"

/**
* memset - Fills the first n bytes of the memory
* @s: pointer.
* @c: character.
* @n: number.
* Return: memory
*/

char *_memset(char *s, char b, unsigned int n)
{
        unsigned int index;
        char *memory = s;
        unsigned char value = b;
        index = 0;

        while (index < n)
        {
                index++;
                memory[index] = value;
        }
        return (memory);
}

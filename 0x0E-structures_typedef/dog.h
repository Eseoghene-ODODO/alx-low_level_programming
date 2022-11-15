#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <stdlib.h>


/**
 * struct dog - create a dictionary with different object
 * @name: character
 * @age:float
 * @owner: character
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

#endif

#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - struct representation for dog
* @name: dog name
* @age: dog age
* @owner: dog owner's name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

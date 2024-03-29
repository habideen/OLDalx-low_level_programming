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


/**
*dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

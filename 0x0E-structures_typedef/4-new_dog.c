#include "dog.h"


/**
* _strlen - returns length of a string
* @str: string to be counted
* Return: returns string length
*/
int _strlen(char *str)
{
int length = 0;
while (str)
length++;

return (length);
}




/**
* _strcopy - copy string pointed by src into dest variable
* @dest: buffer storing string copy
* @src: buffer storing string to copy
* Return: returns copied string
*/
char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}




/**
*new_dog - function to creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case of program failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *create_dog;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

create_dog = malloc(sizeof(dog_t));
if (create_dog == NULL)
return (NULL);

create_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (create_dog->owner == NULL)
{
free(create_dog->name);
free(create_dog);
return (NULL);
}

create_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (create_dog->name == NULL)
{
free(create_dog);
return (NULL);
}

create_dog->age = age;
create_dog->owner = _strcopy(create_dog->owner, owner);
create_dog->name = _strcopy(create_dog->name, name);


return (create_dog);
}

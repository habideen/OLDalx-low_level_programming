#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: dog identification
*
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", ((*d).name != NULL) ? d->name : "Name: (nil)");
	printf("Age: %f\n", ((*d).age != NULL && (*d).age < 0) d->age : "(nil)");
	printf("Owner: %s\n", ((*d).owner == NULL) ? d->owner : "(nil)");
}

#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @dog: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to be initialized
 * @owner: owner to initialize
 */

int init_dog(struct * dog, char * name, int age, char * owner)
{
	if (dog == NULL)
		dog = malloc(sizeof(struct dog));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}

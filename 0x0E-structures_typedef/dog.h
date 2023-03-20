#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information of the dog
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 * Description: longer discription
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int init_dog(struct dog *d, char *name, float age, char *owner);

#endif

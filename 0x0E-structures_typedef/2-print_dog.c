#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/*
 * print_dog - prints dog information
 * @d: a pointer to a dog struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner == "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

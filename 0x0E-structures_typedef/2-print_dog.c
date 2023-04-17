#include "dog.h"
#include <stdio.h>
/**
 * print_dog - fun
 * @d: para
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("%s\n", d->name ? d->name : "(nil)");
		printf("%f\n", d->age);
		printf("%s\n", d->owner ? d->owner : "(nil)");
	}
}

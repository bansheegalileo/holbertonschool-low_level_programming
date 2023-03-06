#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogstructure
 * @name: dogname
 * @age: dogage
 * @owner: dogowner
 *
 * Description: Represents a dog and 3 info pieces
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
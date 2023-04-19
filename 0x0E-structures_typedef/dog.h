#ifndef _HEADER_
#define _HEADER_

/**
* struct dog - Dog properties
* @name: the dog name
* @age: the dog age
* @owner: the dog owner name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

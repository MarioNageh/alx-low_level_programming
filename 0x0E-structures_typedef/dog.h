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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

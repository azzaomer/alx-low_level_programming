#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - new struct
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
	dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

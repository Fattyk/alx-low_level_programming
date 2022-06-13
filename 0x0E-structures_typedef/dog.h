#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Profile of a dog struct
 * @name: string of input name
 * @age: type int of input age
 * @owner: type string of input owner
 *
 * This profile allow a dog information to be accessed and created through a
 * single variable dog
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

#endif /* DOG_H */

#ifndef FILE_DOG
#define FILE_DOG

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
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

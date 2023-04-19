#ifndef DOG_H
#define DOG_H
/**
 * dog - a structure that defines a new type
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

#endif

#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure with dog details
 * @name: name of dog
 * @owner: dog owner
 * @age: age of dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dogtype;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

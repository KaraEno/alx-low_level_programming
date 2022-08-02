#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
*struct dog- just another stray dog
*@name: name of dog
*@owner: owner of dog
*@age: age of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**

 * dog_t - Typedef for struct dog

 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

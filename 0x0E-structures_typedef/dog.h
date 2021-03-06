#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - info about dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: this struct holds info about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - a new type for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struck dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: this struct is for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog_t;
void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t, *d);

#endif /*DOG_H*/


#ifndef DOG_H
0;10;1c#define DOG_H
/**
 *struct dog - struct for dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: the owner of the dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */

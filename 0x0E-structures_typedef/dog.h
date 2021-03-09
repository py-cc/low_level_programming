#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - define struct
* @name: pointer type char
* @age: number type float
* @owner: pointer type char
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */

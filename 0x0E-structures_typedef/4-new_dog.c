#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, j;
	int count1 = 0;
	int count2 = 0;

	new = malloc(sizeof(dog_t));
	
	if (new == NULL || name == NULL || owner == NULL)
		return (NULL);

	while (name[count1])
		count1++;
	while (owner[count2])
		count2++;

	new->name = malloc(count1 + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(count2 + 1);
	if (new->owner == NULL)
	{
		free(new);
		return (NULL);
	}								       
	for (i = 0; i <= count1; i++)
		new->name[i] = name[i];
	for (j = 0; j <= count2; j++)
		new->owner[j] = owner[j];
	new->age = age;
	return (new);
}

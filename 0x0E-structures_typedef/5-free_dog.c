#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory allocated
 * @d: memory pointer for dog object
 *
 * Description: free memory for dog object
 */
void free_dog(dog_t *d)
{
	free(d);
}

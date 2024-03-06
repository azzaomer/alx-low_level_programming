#include <stdio.h>
#include "dog.h"

/**
 * main - checks the code
 *
<<<<<<< HEAD
 * Return: Always returns 0
=======
 * Return: Always return 0
 *
>>>>>>> 6244582a02118972d9293cb9c45584856009fac3
 */

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);
return (0);
}

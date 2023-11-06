0x0E. C - Structures, typedef

Tasks

dog.h
Definition of a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *


1-init_dog.c
A function that initialize a variable of type struct dog.


2-print_dog.c
A function that prints a struct dog.
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.


dog.h
Define a new type dog_t as a new name for the type struct dog.


4-new_dog.c
A function that creates a new dog.
It stores a copy of the name and owner.
Returns NULL if the function fails.


5-free_dog.c
A function that frees dogs.

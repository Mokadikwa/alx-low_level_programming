0x0E. C - Structures, typedef

General
What are structures, when, why and how to use them
How to use typedef

tasks
Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

Write a function that initialize a variable of type struct dog

Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

Define a new type dog_t as a new name for the type struct dog.

A door is what a dog is perpetually on the wrong side of

Write a function that frees dogs.

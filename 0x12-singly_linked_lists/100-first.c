#include <stdio.h>

/*RAYANE - MAD*/

/**
 * flash - before main
 *
 * Return: nada
*/

void __attribute__((constructor)) flash()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include <stdio.h>

/**
 * first - function excuted before main.
 * Return: no retur.
*/
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(", \nI bore my house upon my back!\n");
}

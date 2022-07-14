#include <stdio.h>


void  tortoise(void) __attribute__((constructor));
/**
* tortoise - prints a text befor main function is excuted
* Return: nothing
*/
void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

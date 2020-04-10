#include <stdio.h>
#include "misc.h"

int main()
{
	printf("Hello, World.\n");

	myFunc();

	printf("\npointer() \n");
	pointer();

	printf("\nconstantpointer()\n");
	constantpointer();	

	fflush(stdout);

	return 0;
}

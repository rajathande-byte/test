
#include <stdio.h>
#include "misc.h"
 
/*function definition*/
void myFunc(void)
{
	    printf("Output : \n");
}


void pointer ()
{

int  i = 10;
int *p = &i;

int j = 20;

int *q ;

q = &j;

printf("%d\n",i);

printf("Address = %u Value = %d\n",p,*p);

printf("%d\n",*p);


printf("Address = %u Value = %d\n",q,*q);

}

void constantpointer ()
{
int i = 10;
const int *p;

int *q;

p = q = &i;

printf("i = %d *p = %d *q = %d\n",i,*p,*q);

*q = 20;



printf("i = %d *p = %d *q = %d\n",i,*p,*q);






}


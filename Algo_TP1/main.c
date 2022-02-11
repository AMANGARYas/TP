#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trirapide.h"


int main()
{
	int Tab[5] ={0,-5,10,1,50}, a_aff, a_comp;

	trirapide (Tab,0, 5,&a_aff,&a_comp);

	for (int i =0; i<5 ;i++)
		{ printf("%d\n",Tab[i] );}




	printf ( "%d %d", &a_aff,a_comp);
return 0;
}

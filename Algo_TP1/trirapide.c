#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void trirapide (int T[], int deb,int fin, int* comp_affect, int* comp-compar)
{	int x, pi;

   *comp_compar+ =1;	
  if(deb < fin)

{	*comp_compar++;

	if (fin == deb+1)
		{	* comp_affect+=1;
			x = T[deb];
			*comp_compar+=1;
			if (x> T[fin])
			{	*comp_affect+=2;
				T[deb] = T[fin];
				T[fin] = x;

			}
		}
	else
	{	*comp_affect+=1;
		pi = partition(T,deb,fin);
		trirapide(T,deb,pi-1);
		trirapide(T,pi+1,fin);
	}
}


}

int partition (int T[], int deb,int fin,int* comp_affect, int* comp-compar)
{
	int pivot, p,lambda,comp;
	*comp_affect+=4;

	pivot =T[deb];

	lambda = deb+1;
	p=fin;
	comp= 1;

	printf ( "%d %d %d\n", pivot, deb,fin);
	 *comp_compar+ =1;	
	while(comp)
	{	 *comp_compar+ =1;	
		while(T[lambda]< pivot)
		{	
			*comp_affect+=1;
			lambda =lambda+1;
			 *comp_compar+ =1;	
			if (lambda >= fin)
				return fin;
		}

		 *comp_compar+ =1;	

		while (T[p]> pivot)
		{	
			*comp_affect+=1;
			p= p-1;

			 *comp_compar+ =1;	
			if(p<= deb)
			return deb;
		}
		 *comp_compar+ =1;	
		if(lambda < p)
		{
			echanger(T,lambda,p);
		}
		else 

		{ *comp_affect+=1;
			comp = 0;
		}
	}
	 *comp_compar+ =1;	
	if (deb<p)
	{
		echanger(T,deb,p);
	}
	return p;

}


void echanger(int T[], int deb, int fin,int* comp_affect)

{	int a;
	*comp_affect+=3;
	a =T[deb];

	T[deb] = T[fin];
	
	T[fin] = a;

}
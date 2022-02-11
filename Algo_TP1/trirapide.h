#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#ifndef __TRIRAPIDE_H__
#define __TRIRAPIDE_H__

void trirapide (int T[], int deb,int fin,int* comp_affect, int* comp-compar);

int partition (int T[], int deb,int fin,int* comp_affect, int* comp-compar);
void echanger(int T[], int deb, int fin,int* comp_affect,);

#endif 
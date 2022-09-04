/*
 * main.c
 *
 *  Created on: Aug 11, 2022
 *      Author: karim
 */
#include "stdio.h"
#include "time.h"
#include "stdlib.h"
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int  n  = 0 ,  min = 1 , max = 7 ;
	srand( time(NULL) ) ;
	printf("enter number of rolling " ) ;
	scanf("%d",&n) ;
	for ( int i = 0 ; i<n ; i++ )
	{
		int r = rand() % (max-min) + min  ;
		printf("Dice [%d] = %d\n",i+1,r) ;
	}
	return 0 ;
}


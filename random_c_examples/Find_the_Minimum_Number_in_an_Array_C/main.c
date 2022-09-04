/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()

{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int size , i ;
	printf("enter any size for array = " ) ;
	scanf("%d",&size) ;
	int x[size] ;
	for (  i = 0 ; i < size ; i++ )
	{
		scanf("%d",&x[i]) ;
	}
	int min = x[0] ;
	for (  i = 0 ; i < size-1 ; i++ )
	{
		if ( min > x[i+1] )
			min = x[i+1] ;
	}
	printf("min = %d\n",min) ;
	return 0 ;
}


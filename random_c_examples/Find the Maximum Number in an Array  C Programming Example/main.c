/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: karim
 */
#include "stdio.h"
int *max = 0 ;
int* max_fun ( int x[] , int size )
{
	*max = x[0] ;
	for (  int i = 0 ; i < size-1 ; i++ )
	{
		if ( *max > x[i+1] )
			*max = x[i+1] ;
	}
	return max ;
}
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
	int *y = max_fun( x , size ) ;
	printf("max = %d\n",*y) ;
	return 0 ;
}


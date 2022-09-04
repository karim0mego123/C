/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: karim
 */
#include "stdio.h"
int size ;
void maximum_and_minimum_elements ( int x[] ) ;
int  main ()
{
	int x[1000] ;
	printf("enter size of array  = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&size) ;
	for ( int j = 0 ; j < size ; j++ )
	{
		printf("value [%d] = ",j)  ;
		fflush(stdin) ; fflush(stdout) ;
		scanf("%d",&x[j]) ;
	}
	maximum_and_minimum_elements (x) ;
	printf("min = %d\nmax = %d",x[0],x[size-1]) ;
	return 0 ;

}
void maximum_and_minimum_elements ( int x[] )
{
	int temp ;
	for ( int j = 0 ; x[j] > size ; j++ )
	{
		for ( int i = j+1 ; x[i] > size ; i++ )
		{
			if ( x[j] > x[i] )
			{
				temp = x[i] ;
				x[i] = x[j] ;
				x[j] = temp ;
			}
		}
	}
}

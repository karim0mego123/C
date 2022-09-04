/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: karim
 */
#include "stdio.h"

void elements_of_array2 ( int x[] ) ;
int  main ()
{
	int x[1000] , i ;
	printf("enter size of array  = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&i) ;
	for ( int j = 0 ; j<i ; j++ )
	{
		printf("value [%d] = ",j)  ;
		fflush(stdin) ; fflush(stdout) ;
		scanf("%d",&x[j]) ;
	}
	elements_of_array2 (x) ;
	return 0 ;

}
void elements_of_array2 ( int x[] )
{
	static int i = 0 ;
	if ( *(x+i) == 0 )
		return ;
	printf("%d   ",x[i]) ;
	i++ ;
	elements_of_array2 ( x ) ;

}

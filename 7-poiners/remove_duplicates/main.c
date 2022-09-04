/*
 * main.c
 *
 *  Created on: Aug 4, 2022
 *      Author: karim
 */
#include "stdio.h"
int i ;
int main ()
{
	int a[1000] , i = 0 , x = 0   ;
	int *p = a ;
	printf("enter size of array = " ) ;
	fflush(stdin) ; fflush(stdout)  ;
	scanf("%d",&x) ;
	for ( i = 0 ; i < x ; i++ )
	{
		printf("value [%d] = ",i+1 ) ;
		fflush(stdin) ; fflush(stdout)  ;
		scanf("%d",&a[i]) ;
	}
	for (  i = 0 ; i < x ; i++ )
	{
		for ( int j = i+1 ; j < x ; j++ )
		{
			p = a ;
			if ( *(p+i) == *(p+j) )
			{
				for (   p = p+j ; p < (a+x) ; p++ )
				{
					*(p) = *(p+1) ;
				}
				--j ;
				--x ;
			}
		}
	}
	p = a ;
	printf("----------------------\n") ;
	for ( i = 0 ; i < x ; i++ )
	{
		printf("value [%d] = ",i+1 ) ;
		printf("%d\n",*(p+i) ) ;
	}
	return 0 ;
}

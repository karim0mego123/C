/*
 * main.c
 *
 *  Created on: Aug 5, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int a[10000] , x = 0 , *p = a , i = 0 , j = 0 , min = 0  , max = 0 ;
	printf("enter size of array = "  ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	for ( ; p < (a+x) ; p++ , i++)
	{
		printf("value[%d] = ",i+1 ) ;
		fflush(stdin) ; fflush(stdout) ;
		scanf("%d",p) ;
	}
	p = a ;
	for ( ; j < x ; j++ )
	{
		if ( *p < *(p+j) )
			max = *(p+j) ;
		else
			max = *p ;
	}
	p = a ;
	for ( j = 0 ; j < x ; j++ )
	{
		if ( *p > *(p+j) )
			min = *(p+j) ;
			else
			min = *p ;
	}
	printf("%d\n%d",max,min) ;
	return 0 ;
}


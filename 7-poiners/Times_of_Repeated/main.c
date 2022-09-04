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
	int a[1000] , i = 0 , x = 0 , t = 0     ;
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
	for ( int i = 0 ; i < x ; i++ )
	{
		t = 1 ;
		if (*(p+i) == 0 )
			continue ;
		for ( int j = i+1 ; j < x ; j++ )
		{
			if ( *(p+i) == *(p+j) )
			{
				t++ ;
				*(p+j) = 0 ;
			}
		}

		printf("%d ======> %d\n",*(p+i),t) ;
	}
	return 0 ;

}

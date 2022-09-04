/*
 * main.c
 *
 *  Created on: Aug 7, 2022
 *      Author: karim
 */
#include "stdio.h"
#define t 1000
void search_in_array ( int *a , int size , int *p1 ) ;
int main ()
{
	int x[t] , n = 0 , y = 0 , i = 0 , *p = x ;
	printf("enter size of array = " ) ;
	fflush(stdin)  ; fflush(stdout)  ;
	scanf("%d",&n) ;
	for ( ; p < ( x + n ) ; ++p )
	{
		printf("value [%d] = ", i+1 ) ;
		fflush(stdin)  ; fflush(stdout)  ;
		scanf("%d",p) ;
	}
	printf("enter number you want to search for = " ) ;
	fflush(stdin)  ; fflush(stdout)  ;
	scanf("%d",&y) ;
	search_in_array ( x , n , &y ) ;
}
void search_in_array ( int *a , int size , int *p1 )
{
	int i = 0 ;
	int *p = a ;
	for ( ; p < (a+size) ; p++ )
	{
		++i ;
		if ( *p1 == *p )
			printf("%d is found in position %d",*p1,i) ;
	}
}


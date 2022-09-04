/* main.c
 *
 *  Created on: Aug 6, 2022
 *      Author: karim
 */
#include "stdio.h"
void add_two_matrix ( int a[3][3] , int p[3][3] , int t[3][3] ) ;

int main ()
{
	int a[3][3] , i , p[3][3] , j , t[3][3] ;
	printf("enter arr_1 :\n" ) ;
	for ( i = 0 ; i < 3 ; i++ )
	{
		for (  j = 0 ; j < 3 ; j++ )
		{
			printf("value[%d][%d] = ",i,j) ;
			fflush (stdin) ; fflush(stdout) ;
			scanf("%d", (*(a+i)+j) ) ;
		}
	}
	printf("enter arr_2 :\n" ) ;
	for ( i = 0 ; i < 3 ; i++ )
	{
		for (  j = 0 ; j < 3 ; j++ )
		{
			printf("value[%d][%d] = ",i,j) ;
			fflush (stdin) ; fflush(stdout) ;
			scanf("%d", (*(p+i)+j) ) ;
		}
	}
	add_two_matrix ( a , p , t ) ;
	for ( i = 0 ; i < 3 ; i++ )
	{
		for (  j = 0 ; j < 3 ; j++ )
		{
			printf("%d    ",*(*(p+i)+j) ) ;
		}
		printf("\n") ;
	}
}
void add_two_matrix ( int a[3][3] , int p[3][3] , int t[3][3] )
{
	int i , j ;
	for ( i = 0 ; i < 3 ; i++ )
	{
		for (  j = 0 ; j < 3 ; j++ )
		{
			*(*(t+i)+j) =   ( *(*(a+i)+j ) ) + ( *(*(p+i)+j) )   ;
		}
	}


}

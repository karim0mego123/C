/*
 * main.c
 *
 *  Created on: Aug 6, 2022
 *      Author: karim
 */
#include "stdio.h"
void copy_array ( int *a , int size , int *p ) ;

int main ()
{
	int a[1000] , x , b[1000] , i ;
	printf("enter size of array = " ) ;
	fflush (stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	for ( i = 0 ; i < x ; i++ )
	{
		printf("value[%d] = ",i+1) ;
		fflush (stdin) ; fflush(stdout) ;
		scanf("%d",(a+i)) ;
	}
	copy_array ( a , x , b ) ;
	for ( i = 0 ; i < x ; i++ )
	{
		printf("value[%d] = %d\n",i+1,*(b+i)) ;
	}
}
void copy_array ( int *a , int size , int *p )
{
	for ( int i = 0 ; i < size ; i++ )
	{
		*(p+i) = *(a+i) ;
	}

}

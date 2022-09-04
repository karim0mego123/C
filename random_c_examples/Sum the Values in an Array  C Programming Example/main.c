/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: karim
 */
#include "stdio.h"
int sum_array ( int a[] , int size ) ;
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int size , sum = 0 ;
	printf("enter size of array = " ) ;
	scanf("%d",&size) ;
	int x[size] ;
	for ( int i = 0 ; i < size ; i++ )
	{
		printf("value[%d] = ",i+1) ;
		scanf("%d",&x[i]) ;
	}
	sum = sum_array( x , size ) ;
	printf("%d",sum) ;

	return 0 ;
}
int sum_array ( int a[] , int size )
{
	int sum = 0 ;
	for ( int i = 0 ; i<size ; i++ )
	{
		sum += a[i] ;
	}
	return sum ;
}


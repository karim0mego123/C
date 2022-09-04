/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: karim
 */
#include "stdio.h"
void Reverce_an_array ( int *x , int size ) ;
void print_arr ( int *x , int size ) ;

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int size  ;
	printf("enter size of an array = " ) ;
	scanf("%d",&size) ;
	int x[size] , i  ;
	for ( i = 0 ; i<size ; i++ )
	{
		printf("valuo [%d] = ",i+1) ;
		scanf("%d",&x[i]) ;
	}
	Reverce_an_array (  x , size ) ;
}
void Reverce_an_array ( int *x , int size )
{
	int temp ;
	int r = size ;
	for ( int i  = 0 ; i < (size/2) ; i++ )
	{
		--r ;
		temp = x[i] ;
		x[i] = x[r] ;
		x[r] = temp ;
	}
	print_arr( x , size ) ;
}
void print_arr ( int *x , int size )
{
	for ( int i = 0 ; i<size ; i++ )
	{
		printf("value[%d] = %d\n",i+1,x[i] ) ;
	}
}

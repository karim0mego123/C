/*
 * main.c
 *
 *  Created on: Jul 23, 2022
 *      Author: karim
 */
#include "stdio.h"
int i = 0 , j = 0 ;
int Fibonacci_term ( int n ) ;
int main ()
{
	int x ;
	printf("enter any number = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	printf("%d",Fibonacci_term(x) ) ;
	return 0 ;
}
int Fibonacci_term ( int n )
{
	if ( n == 0)
		return 0;
	else if  ( n == 1)
		return 1;
	else
		return ( Fibonacci_term(n-1)+ Fibonacci_term( n-2 ) ) ;

}


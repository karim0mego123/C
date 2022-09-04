/*
 * main.c
 *
 *  Created on: Jul 23, 2022
 *      Author: karim
 */
#include "stdio.h"
int Factorial ( int x ) ;
int main ()
{
	int x ;
	printf("enter any number to git Factorial = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	printf("Factorial = %d ",Factorial(x) );
	return 0 ;

}
int Factorial ( int x )
{
	if ( x >= 1 )
		return x * Factorial(x-1) ;
	else
		return 1 ;
}


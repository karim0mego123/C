/*
 * main.c
 *
 *  Created on: Jul 23, 2022
 *      Author: karim
 */
#include "stdio.h"
int r ;
int even_or_odd ( int x ) ;
int main ()
{
	int x ;
	printf("enter any number to know even or odd = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	r = x ;
	even_or_odd (x) ;
	if ( even_or_odd(x) == 0 )
		printf("even number ") ;
	else
		printf("odd number " ) ;
	return 0 ;
}
int even_or_odd ( int x )
{
	if ( x == 2 )
		return 1&r ;
	else if ( x == 1 )
		return 1&r ;
	else
		even_or_odd (x/2) ;
}

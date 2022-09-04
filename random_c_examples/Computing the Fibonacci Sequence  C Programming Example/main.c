/*
 * main.c
 *
 *  Created on: Aug 11, 2022
 *      Author: karim
 */
 int y ;
int Fibonacci ( int x ) ;

#include "stdio.h"
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x ;
	printf("enter number to git Fibonacci = " ) ;
	scanf("%d",&x) ;
	printf("%d",Fibonacci (x) ) ;
	return 0 ;
}
int Fibonacci ( int x )
{
	 if ( x == 1 || x == 2 )
			return 1 ;
	 else if ( x > 0 )
		return ( Fibonacci (x-1) +  Fibonacci (x-2) ) ;
	else
		return 0 ;

}

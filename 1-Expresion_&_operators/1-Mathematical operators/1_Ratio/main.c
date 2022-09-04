/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: karim
 *
 *      Write a c code that will ask the user to enter four values a,b,c and
		d then evaluates the ratio of (a + b) to (c-d) and prints the result,
		if (c-d) is not equal zero
 */
#include "stdio.h"
int main ()
{
	int a , b , c , d ;
	printf("enter value of a = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&a) ;
	printf("enter value of b = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&b) ;
	printf("enter value of c = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&c) ;
	printf("enter value of d = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&d) ;
	printf("ratio = %.2f",(float)(a+b)/(c-d)) ;
	return 0 ;

}


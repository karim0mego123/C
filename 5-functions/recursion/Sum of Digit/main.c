/*
 * main.c
 *
 *  Created on: Jul 23, 2022
 *      Author: karim
 */
#include "stdio.h"
int sum = 0 ;
int sum_of_digit ( int n ) ;
int main ()
{
	int x ;
	printf("enter any number = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	printf("%d",sum_of_digit(x) ) ;
	return 0 ;
}
int sum_of_digit ( int n )
{
	int r ;
	if ( n == 0)
		return 0 ;
	r = n % 10 ;
	n/=10 ;
	sum = sum_of_digit(n) + r ;
	return sum ;
}


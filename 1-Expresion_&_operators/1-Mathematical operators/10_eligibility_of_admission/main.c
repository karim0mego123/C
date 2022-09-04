/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: karim
 */
#include "stdio.h"
#include "math.h"
int main ()
{
	float m ,phs ,che ;
	printf("enter value of m = ") ;
	fflush (stdin) ; fflush(stdout) ;
	scanf("%f",&m) ;
	printf("enter value of phs = ") ;
	fflush (stdin) ; fflush(stdout) ;
	scanf("%f",&phs) ;
	printf("enter value of che = ") ;
	fflush (stdin) ; fflush(stdout) ;
	scanf("%f",&che) ;
	if ( ( m>=65 && phs>=55 && che>=180  && (m+phs+che)>=180) || (m+phs>=140) || (m+che>=140) )
		printf("the candidate is not eligible for admission") ;
	else
		printf("the candidate is not  eligible for admission") ;
	return 0 ;
}


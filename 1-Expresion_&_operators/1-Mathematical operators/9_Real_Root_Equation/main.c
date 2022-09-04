/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: karim
 */
#include "stdio.h"
#include "math.h"
void main ()
{
	float a , b , c ;
	printf("enter value of a = ") ;
	fflush (stdin) ; fflush(stdout) ;
	scanf("%f",&a) ;
	printf("enter value of b = ") ;
	fflush (stdin) ; fflush(stdout) ;
	scanf("%f",&b) ;
	printf("enter value of c = ") ;
	fflush (stdin) ; fflush(stdout) ;
	scanf("%f",&c) ;
	float p = pow(b,2)-4*a*c ;
	if ( a==0 && b==0 )
		printf("no soluation") ;
	else if (a==0)
		printf("one root is %.2f",(-c/b)) ;
	else if (p<0)
		printf("no real roots") ;
	else
	{
		printf("there is two roots : \n" ) ;
		printf("the first root is %.2f\n",(-b+sqrt(p))/(2*a)) ;
		printf("the first root is %.2f",(-b-sqrt(p))/(2*a)) ;
		return 0 ;
	}
}


/*
 * MAIN.C
 *
 *  Created on: Jul 15, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	float x , y ;
	printf("enter valer of x = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f",&x) ;
	printf("enter valer of y = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f",&y) ;
	printf("%.2f",(float)x*y) ;
	return 0 ;
}


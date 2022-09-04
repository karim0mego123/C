/*
 * MAIN.C
 *
 *  Created on: Jul 15, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int x , y , temp ;
	printf("enter valer of x = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	printf("enter valer of y = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&y) ;
	temp = x ;
	x = y ;
	y = temp ;
	printf("value of x = %d\n",x) ;
	printf("value of y = %d",y) ;
	return 0 ;
}


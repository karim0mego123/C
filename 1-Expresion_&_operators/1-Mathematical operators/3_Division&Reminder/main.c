/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int x , y ;
	printf("enter two number : " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d %d",&x,&y) ;
	printf("division = %d",x/y) ;
	printf("\nreminder = %d",x%y) ;
	return 0 ;
}


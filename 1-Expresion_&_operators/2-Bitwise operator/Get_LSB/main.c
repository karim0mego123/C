/*
 * main.c
 *
 *  Created on: Jul 16, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int num_1  ;
	printf("enter any number = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&num_1) ;
	if ( 1&num_1 )
		printf("LSB of %d is set (1)",num_1);
	else
		printf("LSB of %d is unset (0)",num_1) ;
	return 0 ;
}

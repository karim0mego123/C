/*
 * main.c
 *
 *  Created on: Jul 16, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int num_1 , posation_of_bit  ;
	printf("enter any number = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&num_1) ;
	printf("enter posation of bit = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&posation_of_bit) ;
	if ( 1&( num_1 >> ( posation_of_bit ) ) )
		printf("BIT of %d is set (1)",num_1);
	else
		printf("BIT of %d is unset (0)",num_1) ;
	return 0 ;
}

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
	printf("enter posation of bit to toggle = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&posation_of_bit) ;
	num_1 = num_1 ^( 1 << posation_of_bit ) ;
		printf("num_1 = %d",num_1);
	return 0 ;
}

/*
 * main.c
 *
 *  Created on: Jul 16, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int num_1 , posation_of_bit , i = 0 ;
	printf("enter any number = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&num_1) ;
	while (num_1 > 0)
    {
        num_1 /= 2 ;
            i++ ;
    }
		printf("num_1 = %d",32-i);
	return 0 ;
}

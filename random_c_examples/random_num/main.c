/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: karim
 */
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0) ;
	int min , max , r_num , n ;
	printf("enter min of random variable = " ) ;
	scanf("%d",&min) ;
	printf("enter max of random variable = " ) ;
	scanf("%d",&max) ;
	printf("enter number of random variable you want = "  ) ;
	scanf("%d",&n) ;
	srand(time(NULL)) ;
	for ( int i = 0 ; i < n ; i++ )
	{
		r_num = rand() % (max - min) + min ;
		printf("%d\n",r_num ) ;
	}
	return 0 ;
}


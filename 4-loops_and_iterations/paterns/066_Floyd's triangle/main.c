
/*
 * main.c
 *
 *  Created on: Jul 17, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int x , i = 0 , j = 0 , t = 1  ;
	printf("enter number of rows = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	for ( i = 0 ; i<x ; i++ )
	{
		for ( j = 0 ; j<=i ; j++ )
		{
			printf("%d ",t++) ;
		}
		printf("\n") ;
	}
	return 0 ;
}


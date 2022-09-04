
/*
 * main.c
 *
 *  Created on: Jul 17, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int x  , i = 0 , j = 0   ;
		printf("enter number of rows = " ) ;
		fflush(stdin) ; fflush(stdout) ;
		scanf("%d",&x) ;
		for ( i = 0 ; i < x ; i++ )
		{
			for ( j = 0 ; j < x ; j++ )
			{
				if (i == 0 || i == (x-1) || j == 0 || j == x-1 ||(i+j)==x-1 ||(i==j))
				{
					printf("*") ;
				}
				else
					printf(" ") ;
			}
			printf("\n" ) ;
		}
}

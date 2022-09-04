
/*
 * main.c
 *
 *  Created on: Jul 17, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int x , y , i = 0 , j = 0 , s  ;
	printf("press(1) for printing parallelgram or (0) for rhombus  = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&s) ;
	switch (s)
	{
	case 1 :
		printf("enter number of rows = " ) ;
		fflush(stdin) ; fflush(stdout) ;
		scanf("%d",&x) ;
		for ( i = 0 ; i < x ; i++ )
		{
			for ( j = 0 ; j < x ; j++ )
			{
				if (j-i>0)
					printf("*") ;
				else
					printf(" ") ;
			}
			printf("\n" ) ;
		}
		break ;
	case 0 :
		printf("enter number of rows = " ) ;
		fflush(stdin) ; fflush(stdout) ;
		scanf("%d",&x) ;
		printf("enter number of colums = " ) ;
		fflush(stdin) ; fflush(stdout) ;
		scanf("%d",&y) ;
		for ( i = 1 ; i <= x ; i++ )
		{
			for ( j = 1 ; j <=y ; j++ )
			{
				if (i == 1 || i == x || j == 1 || j == y )
				{
					printf("*") ;
				}
				else
				{
					printf(" ") ;
				}

				}
				printf("\n") ;
			}
			break ;
	default :
		printf("you have entered wrong choice = " ) ;
		break ;
		}
		return 0 ;
	}


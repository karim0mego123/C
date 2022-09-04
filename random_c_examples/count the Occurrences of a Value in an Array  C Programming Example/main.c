/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x[] = {1,2,3,4,5,1,2,3,4,5,6,1,2,13,2,31,3,41,213,23,1,2,1,1} ;
	int y , size = sizeof(x)/sizeof(int);
	int counter = 0 ;
	printf("enter number to search repeated time = " ) ;
	scanf("%d",&y)  ;
	for ( int i = 0 ; i < size ; i++ )
	{
		if ( y == x[i] )
			counter++ ;
	}
	printf("time of repeated = %d",counter) ;
	return 0 ;
}


/*
 * main.c
 *
 *  Created on: Aug 6, 2022
 *      Author: karim
 */
#include "stdio.h"
void Cycle_Swap ( int *p1 , int * p2 ) ;

int main ()
{
	int x = 7 , y = 8 , *p1 = &x , *p2 = &y ;
	Cycle_Swap ( p1 , p2 ) ;
	printf("x = %d\ny = %d",x,y) ;
	return 0 ;
}
void Cycle_Swap ( int *p1 , int * p2 )
{
	int a ;
	int *temp = &a ;
	*temp = *p1 ;
	*p1 = *p2 ;
	*p2 = *temp ;
}

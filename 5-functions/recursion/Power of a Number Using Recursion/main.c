/* * main.c * *  Created on: Jul 23, 2022 *
 * Author: karim */
#include "stdio.h"
int power_num ( int x , int y ) ;
int main ()
{
	int x , y  ;
	printf("enter base to git power  = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	printf("enter power of number = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&y) ;
	printf("power_num = %d ", power_num(x,y) ) ;
	return 0 ;
}
int power_num ( int x , int y )
{
	if ( y >= 1 )
		return x * power_num(x,--y) ;
	else
		return 1 ;
}

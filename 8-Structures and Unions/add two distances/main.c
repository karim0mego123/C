/*
 * main.c
 *
 *  Created on: Jul 26, 2022
 *      Author: karim
 */
#include "stdio.h"
struct num {
	int num_1 ;
	int num_2 ;
}x;
int git_data( int , int ) ;
void print_result ( int ) ;
int main ()
{
	int t = 0 ;
	print_result (t) ;
	return 0 ;
}
int git_data( int , int  )
{
	int sum = 0 ;
	printf("enter first num = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x.num_1) ;
	printf("enter second num = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x.num_2) ;
	sum =  x.num_1 + x.num_2 ;
	return sum ;
}
void print_result ( int )
{
	printf("result = %d", git_data( x.num_1 , x.num_2 ) ) ;
}

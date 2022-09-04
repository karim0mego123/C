/*
 * main.c
 *
 *  Created on: Jul 23, 2022
 *      Author: karim
 */
#include "stdio.h"
void revers_num ( int x ) ;
int main ()
{
	int x ;
	printf("enter any number to git revers_num = " ) ;
	fflush(stdin)  ; fflush(stdout) ;
	scanf("%d",&x) ;
	revers_num (x) ;
	return 0 ;
}
void revers_num ( int x ) {
    int c ;
	if ( x == 0 )
		return  ;
		c = x %  10 ;
		printf("%d   ",c) ;
		revers_num (x/10) ;
}

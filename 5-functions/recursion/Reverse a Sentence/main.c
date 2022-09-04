/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: karim
 */
#include "stdio.h"

void Reverse_a_Sentence ( char x[] ) ;
int  main ()
{
	char x[1000] ;
	printf("enter any string to reverse = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	gets(x) ;
	Reverse_a_Sentence (x) ;
	return 0 ;

}
void Reverse_a_Sentence ( char x[] )
{
	char c ;
	static int i = 0 ;
	if ( x[i] == 0 )
		return ;
	c = x[i] ;
	++i ;
	Reverse_a_Sentence ( x ) ;
	printf("%c   ",c) ;


}

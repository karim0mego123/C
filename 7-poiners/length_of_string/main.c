/*
 * main.c
 *
 *  Created on: Aug 7, 2022
 *      Author: karim
 */
#include "stdio.h"
int *length_of_string ( char *a ) ;
int main ()
{
	char x[1000] , *y = x ;
	printf("enter any string : " ) ;
	fflush(stdin)  ; fflush(stdout)  ;
	gets(x) ;
	int *p = length_of_string ( y ) ;
	printf("size of string = %d",*p) ;

}
int *length_of_string ( char *a )
{
	int i = 0 ;
	static int n = 0 ;
	while ( *(a+i) != 0 )
	{
		n++ ;
		i++ ;
	}
	return &n ;
}

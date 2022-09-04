/*
 * main.c
 *
 *  Created on: Aug 7, 2022
 *      Author: karim
 */
#include "stdio.h"
#include "string.h"
int * copy_string ( char *p1 , int y ) ;
int main ( )
{
	int y = 0 ;
	char x[1000]  ;
	char *p1 = x , *p2 = NULL ;
	printf("enter string_1 : ") ;
	fflush(stdin)  ; fflush(stdout) ;
	gets(x) ;
	y = strlen(x);
	p2=  copy_string ( p1 , y ) ;
	printf("string_2 : %s",p2) ;
}
int * copy_string ( char *p1 , int y )
{
	 static char x[1000] ,  *p = x ;
	for ( int i = 0 ; i < y ; i++ )
	{
		*( p + i ) = *( p1 + i ) ;
	}
	return p ;
}

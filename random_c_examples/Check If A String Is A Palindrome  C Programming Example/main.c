/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: karim
 */
#include "stdio.h"
#include "string.h"
#include "stdbool.h"
bool check_out ( char p[]  , int size) ;
void print ( bool i ) ;

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char a ;
	char p[100]  ;
	printf("enter any string to check palindrome : " ) ;
	scanf("%s",p) ;
	int size = strlen (p) ;
	bool y = check_out ( p , size ) ;
	print ( y ) ;
}
bool check_out ( char p[]  , int size)
{
	int r = size ;
	for ( int i = 0 ; i < ( size/2 ); i++)
	{
		--r ;
		if (*(p+i) == *(p+r))
			continue ;
		else
			return false ;
	}
	return true ;
}
void print ( bool i )
{
	if ( i == true )
		printf("palindrome ") ;
	else
		printf("not palindrome ") ;
}

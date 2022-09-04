/*
 * main.c
 *
 *  Created on: Aug 11, 2022
 *      Author: karim
 */
#include "stdio.h"
int  Counting_the_Vowels_in_a_String ( char a[] ) ;

int main ()
{
	char x[1000]  ;
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("enter any string to git number of char : " ) ;
	scanf("%s",x) ;
	printf("%d", Counting_the_Vowels_in_a_String (x) );
	return 0 ;
}
 int  Counting_the_Vowels_in_a_String ( char a[] )
{
	 int n = 0 , i = 0 ;
	while ( *(a+i) != 0 )
	{
		n++ ;
		++i ;
	}
	return n ;
}

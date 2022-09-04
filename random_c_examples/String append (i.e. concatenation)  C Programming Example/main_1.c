/*
 * main.c
String append (i.e. concatenation)  C Programming Example
 *
 *  Created on: Aug 11, 2022
 *      Author: karim
 */
#include "string.h"
#include "stdio.h"
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i = 0 ; j = 0 ; 

	char string_1[100] , string_2[100] , string_3[200] ;
	printf("eenter first string : " ) ;
	gets(string_1) ;
	printf("eenter second string : " ) ;
	gets(string_2) ;
	int n =  + strlen(string_2) ;
	for (  i = 0 ; i < strlen (string_1) ; i++)
	{
		*(string_3+i) = *(string_1+i) ; 
	}
	j = i ; 
	for (  i = 0  ; i < strlen (string_2) ; i++ )
	{
		*(string_3+j) = *(string_2+i) ;
		j++ ; 
	}
	*(string_3+i) = 0 ;
	printf("string_concatenation = %s",string_3) ;	
	return 0 ;
}


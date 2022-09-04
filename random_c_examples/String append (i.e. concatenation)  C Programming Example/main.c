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

	char string_1[100] , string_2[100] , string_3[200] ;
	printf("eenter first string : " ) ;
	gets(string_1) ;
	printf("eenter second string : " ) ;
	gets(string_2) ;
	strcpy (string_3,string_1 ) ;
	strcat ( string_3 , " " ) ;
	strcat ( string_3 , string_2 ) ;
	printf("string_concatenation = %s",string_3) ;
	return 0 ;
}


/*
 * main.c
 *
 *  Created on: Aug 7, 2022
 *      Author: karim
 */
#include "string.h"
#include "stdio.h"
int compare_two_strings ( char *p1 , char *p2 , int size_1 , int size_2 ) ;

int main ()
{
	char x[1000] , y[1000] ;
	int size_1 = 0 , size_2 = 0  ;
	char *p1 = x , *p2 = y ;
	printf("enter string_1 : " ) ;
	fflush(stdin)  ; fflush(stdout)  ;
	gets(x) ;
	printf("enter string_2 : " ) ;
	fflush(stdin)  ; fflush(stdout)  ;
	gets(y) ;
	size_1 = strlen(x) ;
	size_2 = strlen(y) ;
	int s = compare_two_strings ( p1 , p2 ,size_1 , size_2) ;
	if (s==1)
		printf("%s is bigger than %s ",p1,p2) ;
	else if ( s == -1 )
		printf("%s is smaller than %s ",p1,p2) ;
	else
		printf("%s is equal to %s ",p1,p2) ;
	return 0 ;
}
int compare_two_strings ( char *p1 , char *p2 , int size_1 , int size_2 )
{
	int n = 0 , i = -1 ;
	if ( size_1 > size_2 )
		n = size_1 ;
	else
		n = size_2 ;
	while ( n )
	{
		--n ;
		i++ ;
		if (*(p1+i) == *(p2+i) )
			continue ;
		else if ( *(p1+i) > *(p2+i) )
			return 1 ;
		else
			return -1 ;
	}
	return 0 ;
}

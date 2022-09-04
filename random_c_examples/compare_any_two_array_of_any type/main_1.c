/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: karim
 */
#include "string.h"
#include "stdio.h"
int main ()   
{
	char a[] = "karim" ;
	char b[] = "ahmed" ;
	char c[] = "karim" ;
	int x[]= { 1 , 2 } ; 
	int y[] = { 3 , 4 } ; 
	memset (x , 0 , 2*sizeof(int) ) ;
	printf("%d %d\n",x[0],x[1]) ;
	memcpy ( x , y , 2*sizeof(int)) ;
	printf("%d %d\n",x[0],x[1]) ;
	if ( memchr ( x , 1 , 2*sizeof(int) ) != NULL )  // if not found will return NULL char 
	printf("found") ; 
	else
	printf("not founded") ;
	return 0 ;
}

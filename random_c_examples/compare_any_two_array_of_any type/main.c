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
	int x[]= { 1 , 2 } ; // 0001  0002
	short int y[] = { 1 , 2 } ; // 01  02
	if ( memcmp ( a , c , sizeof(a) ) == 0 )
		printf("there are the same " ) ;
	else
		printf("there are not same " ) ;

	return 0 ;
}



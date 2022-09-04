/*
 * main.c
 *
 *  Created on: Aug 11, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char  x[1000]  ;
	printf("enter any string : " ) ;
	gets(x) ;
	for ( int i = 0 ; *(x+i) != 0  ; i++ )
	{
		if ( *(x+i) == ' ' )
			continue ;
		else if ( *(x+i) >= 'A' && *(x+i) <='Z' )
			*(x+i) += 32 ;
		else
			*(x+i) -= 32 ;
	}
	printf("string : %s",x) ;
	return 0 ;
}


/*
 * MAIN.C
 *
 *  Created on: Jul 15, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	int x  ;
	printf("enter any number = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	(x>0)? printf("num is pos") : (x<0)? printf("num is nag" ) :
			printf("num equal to zero " ) ;
	return 0 ;
}


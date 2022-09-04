/*
 * MAIN.C
 *
 *  Created on: Jul 15, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	char a ;
	printf("enter any char : " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%c",&a) ;
	switch (a)
	{
	case 'a' :
	case 'A' :
	case 'e' :
	case 'E' :
	case 'o' :
	case 'O' :
	case 'i' :
	case 'I' :
	case 'u' :
	case 'U' :
		printf("char is vowel ") ;
		break ;
	default :
		printf("char is cons " ) ;
		break ;
		return 0 ;

	}


	return 0 ;
}


/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	char a ;
	printf("enter any char to git ASCII code :") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%c",&a) ;
	printf("ASCII code of char %c = %d",a,a) ;
	return 0 ;
}


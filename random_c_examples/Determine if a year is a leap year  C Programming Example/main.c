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

	int x;
	printf("rnter any year to cheak leap year or not = " ) ;
	scanf("%d",&x) ;
	if ( x%4 == 0 || x%100 == 0 || x%400 == 0 )
		printf("leap year") ;
	else
		printf("not leap year") ;
	return 0 ;
}

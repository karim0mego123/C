
/*
 * main.c
 *
 *  Created on: Aug 8, 2022
 *      Author: karim
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fun ( int n)
{
	if ( n == 20 )
		return 0 ;
	else if ( (n-9) % 2 == 0 )
		printf("%d ",(n-9)-1) ;
	else
		printf("%d ",(n-9)+1) ;
	return fun(n+1);
}

int main() {
	fun(10) ;
	return 0;
}




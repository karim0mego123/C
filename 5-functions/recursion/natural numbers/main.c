/* * main.c * *  Created on: Jul 23, 2022 *
 * Author: karim */
#include "stdio.h"
int print_nums ( int x ) ;
int main ()
{
	int x ;
	printf("enter number to print numbers between 1 : n = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	print_nums(x);
	return 0 ;
}
int print_nums ( int x )
{
	int r ;
	if (x >= 1 )
	{
		r = x ;
		print_nums(--x) ;
	}
	return printf("%d\n",r) ;
}

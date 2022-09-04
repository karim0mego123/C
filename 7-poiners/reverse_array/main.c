/* main.c
 *
 *  Created on: Aug 6, 2022
 *      Author: karim
 */
#include "stdio.h"
void reverse_array ( int *a , int size ) ;

int main ()
{
	int a[1000] , x , i ;
	printf("enter size of array = " ) ;
	fflush (stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	for ( i = 0 ; i < x ; i++ )
	{
		printf("value[%d] = ",i+1) ;
		fflush (stdin) ; fflush(stdout) ;
		scanf("%d",(a+i)) ;
	}
	reverse_array ( a , x ) ;
}
void reverse_array ( int *a , int size )
{
	int u = 1 ;
	for ( int i = size-1 ; i >=0 ; i-- )
	{
		printf("value [%d] = %d\n",u,*(a+i) ) ;
	}
}

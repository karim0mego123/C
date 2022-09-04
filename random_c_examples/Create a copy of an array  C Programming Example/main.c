/*
 * main.c
 *
 *  Created on: Aug 11, 2022
 *      Author: karim
 */
#include "stdio.h"
#include "string.h"

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr1[] = {1,2,3,4,5,6,7} ;
	int arr2[] = {9,8,7,6,5,4,3} ;
	memcpy(arr1,arr2,2*sizeof(arr1)) ;
	for ( int i = 0 ; i < ( sizeof (arr1) / sizeof(arr1[0]) ) ; i++  )
	{
		printf("%d\n",arr1[i]) ;
	}
	return 0 ;
}


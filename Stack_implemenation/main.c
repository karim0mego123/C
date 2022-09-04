/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *      Author: karim
 */
#include "stdio.h"
#include "stdint.h"
#define size 5
int arr[size] ;
int top = -1 ;

int push ( int value ) ;
int is_full (void) ;
void pop (void) ;
int is_empty (void) ;
void peek (void) ;

int main ()
{
	int ch , x ;
	printf("1-push\n") ;
	printf("2-pop\n") ;
	printf("3-peek\n") ;
	printf("4-transverse\n") ;
	printf("5-Quit") ;

	while (1)
	{
		printf("\nenter number to choice a creation = " ) ;
		fflush(stdout) ;
		scanf("%d",&ch) ;
		switch (ch)
		{
		case 1 :
			printf("enter value to b pushed = " ) ;
			fflush(stdout) ;
			scanf("%d",&x) ;
			push(x) ;
			break ;
		case 2 :
			pop() ;
			break ;
		case 3 :
			peek() ;
			break ;
		case 4 :
			int i = 0 ;
			for ( i = 0 ; i < top+1 ; i++ )
			{
				printf("%d\n",arr[i]) ;
			}
			break ;
		case 5 :
			printf("programm is ended " ) ;
			return 0 ;
		default :
			printf("you hve entered wrong answer " ) ;
			break ;
		}
	}
}
int push (int value)
{
	if (is_full())
	{
		printf("stack overflow " ) ;
	}
	else
	{
		top++ ;
		arr[top] = value ;
	}
	return 0 ;
}
void pop ()
{
	if (is_empty())
		printf("stack underflow " ) ;
	else
	{
		printf("%d",arr[top]) ;
		--top ;
	}

}
void peek ()
{
	if (is_empty())
		printf("is empty") ;
	else
		printf("%d",arr[top]) ;
}
int is_full()
{
	if ( top == (size-1) )
		return 1 ;
	else
		return 0 ;
}
int is_empty ()
{
	if (top == -1 )
		return 1 ;
	else
		return 0 ;

	return 0 ;
}



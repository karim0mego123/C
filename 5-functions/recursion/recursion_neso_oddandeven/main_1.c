#include "stdio.h"
int even ( int n ) ;
int odd ( int n )

{
	if ( n <= 10 )
	{
		printf("%d ",n+1) ;
		even(n+1) ; 
	}
	else
		return 0 ; 
}
int even ( int n )
{
	if ( n <= 10 )
	{
		printf("%d ",n-1) ;
		odd(n+1) ;
	}
	else
		return 0 ; 

}
int main() {
	int i = odd (1) ;
	return 0;
}

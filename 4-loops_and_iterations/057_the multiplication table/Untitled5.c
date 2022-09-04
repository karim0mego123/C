
#include <stdio.h>
int main ()
{
    int  i = 0 , n ;
    printf("enter number to git mulibly table = " ) ;
    scanf("%d",&n) ;
    for ( i = 1 ; i <= 10 ; i++ )
    {
        printf("%d * %d = %d\n",n,i,n*i) ;

    }
    return 0 ;
}


#include <stdio.h>
int main ()
{
    int sum = 0 , i = 0 , x[10] ;
    for ( i = 1 ; i <= 10 ; i++ )
    {
        printf("enter value[%d] = ",i) ;
        scanf("%d",&x[i]) ;
        sum += x[i] ;
    }
    printf("avr = %.2f\n",(float)sum/10) ;
    printf("%d",sum) ;
    return 0 ;
}

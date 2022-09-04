/*
 * main.c

 *Convert Celsius to Fahrenheit  C Programming Example
 *  Created on: Aug 10, 2022
 *      Author: karim
 */
#include "stdio.h"
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int Celsius = 0 ;
	float Fahrenheit = 0 ;
	printf("enter the temperature in celsius = " ) ;
	scanf("%d",&Celsius) ;
	Fahrenheit = ( (float)Celsius * 9 / 5 ) + 32 ;
	printf("%.2f",Fahrenheit) ;
	return 0 ;
}


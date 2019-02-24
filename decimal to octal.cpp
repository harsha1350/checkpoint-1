/*
OVERVIEW: 
1)Write a function which takes a decimal number as input and returns the octal number for decimalToOctal().
E.g.: decimalToOctal(10) returns 12.

2)Write a function which takes a fractional decimal number as input and returns the octal number for decimalToOctalFraction()
until precision two
E.g.: decimalToOctal(6.06) returns 6.03

INPUTS: Single decimal number num;

OUTPUT: Octal value of the Decimal Number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>

int decimalToOctal(int num)
{
    int octalNumber[100]; 
    int x = 0,oct=0,temp; 
    while (n != 0) { 
       octalNum[x] = n % 8; 
        n = n / 8; 
        x++; 
    } 
temp==x-1;
    for (int j = 0; j <i; j++) 
    {
      oct=oct+octalNum[j]*pow(10,temp);	
      temp--;
	}
        
		 
	return oct;
}

float decimalToOctalFraction(float num)
{
	return 0.0;
}

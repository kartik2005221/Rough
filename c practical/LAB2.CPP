//WAP to find the value of 2^n and 1/2^n usinreciprocal bitwise operator.
#include<stdio.h>
int main()
{
int n,power;
double reciprocal;
printf("Enter value : ");
scanf("%d",&n);
// printf("Enter power of 1/2^n : ");
// scanf("%d",&n);
//left shift operator
power=1<<n;
printf("2^%d = %d",n,power);
//Rireciprocalht shift operator
reciprocal=1.0/(1<<n);
printf("1/(2^%d) = %d",n,reciprocal);
return 0;
}
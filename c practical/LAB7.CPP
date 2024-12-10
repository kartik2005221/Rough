// WAP to find greatest of three numbers using conditional operator.
#include<stdio.h>
int main()
{
 int num1,num2,num3,max;
 printf("Enter value of three numbers :");
 scanf("%d %d %d",&num1,&num2,&num3);
 max=num1;
 if(num2<max)
 max=num2;
 if(num3<max)
 max=num3;
 printf("\nThe smallest value is %d",max);
 return 0;
}

#include <stdio.h>

int main() { 
    int a, b, c, s = 0;
    float avg = 0;
    printf("Welcome to the Program of Addition\n");
    
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    printf("Enter C: ");
    scanf("%d", &c);
    
    s = a + b + c;
    printf("Sum of 3 numbers is %d \n", s);
    avg = s/3.0 ;
    printf("Avg of 3 numbers is %f \n", avg);

    printf("Thanks!");

    return 0;
}

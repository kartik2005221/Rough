#include <stdio.h>

int main() {
    int a, b, s = 0;
    printf("Welcome to the Program of Addition\n\t\t\t\t   by AiR \n");

    printf("Enter A: "); 
    while (scanf("%d", &a) != 1) { 
        printf("Invalid input. Please enter a valid integer for A: ");
        while (getchar() != '\n'); 
    }

    printf("Enter B: ");
    while (scanf("%d", &b) != 1) { 
        printf("Invalid input. Please enter a valid integer for B: ");
        while (getchar() != '\n'); 
    }

    s = a + b; 
    
    printf("Sum of both numbers is %d\n", s);
    printf("Thanks!\n"); 

    return 0; 
}

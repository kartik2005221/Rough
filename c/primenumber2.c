#include <stdio.h>

int main(){
    int a, b = 2;
    int is_prime = 1; // flag variable

    printf("enter a number : ");
    scanf("%d", &a);

    while (b * b <= a) { // optimized loop condition
        if (a % b == 0) {
            is_prime = 0; // set flag to 0 if a is not prime
            break; // exit the loop
        }
        b++;
    }

    if (is_prime) {
        printf("a is a prime number\n");
    } else {
        printf("a is not a prime number\n");
    }

    return 0;
}
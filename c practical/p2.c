#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int power = 1 << n;  // Calculate 2^n using left shift
    double reciprocal = 1.0 / power;  // Calculate 1/(2^n) using division

    printf("2^%d = %d\n", n, power);
    printf("1/(2^%d) = %.10f\n", n, reciprocal);

    return 0;
}

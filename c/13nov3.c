#include <stdio.h>

int swap(int a, int b){
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("a=%d, b=%d", a,b);
    return 0;
}
int main(){
    int a,b;
    printf("enter a and b : ");
    scanf("%d %d", &a, &b);
    printf("a=%d, b=%d\n", a,b);

    printf("after swapping\n");
    swap(a,b);
}
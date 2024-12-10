// WAP to display the following pattern if number of rows (1-9) are input by the user:
//     4
//    4 3
//   4 3 2
//  4 3 2 1
// 4 3 2 1 0
//  4 3 2 1
//   4 3 2
//    4 3
//     4

#include<stdio.h>
int main()
{
	printf("Enter the number of rows: ");
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j < i + 1; ++j)
			printf("\t%d", i);
		printf("\n");
    }}
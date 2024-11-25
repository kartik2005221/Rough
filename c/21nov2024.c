#include <stdio.h>

struct customer
{
    char name[20];
    char contact_no[15];
    char address[50];
};

int main()
{
    struct customer cust1, cust2, cust3;

    printf("Enter the details of customer 1:\n");
    scanf("%19s %14s %s", cust1.name, cust1.contact_no, cust1.address);
    
    printf("Enter the details of customer 2:\n");
    scanf("%19s %14s %s", cust2.name, cust2.contact_no, cust2.address);

    printf("Enter the details of customer 3:\n");
    scanf("%19s %14s %s", cust3.name, cust3.contact_no, cust3.address);

    printf("\nCustomer 1 Details:\n");
    printf("Name: %s\n Contact Number: %s\n Address: %s", cust1.name, cust1.contact_no, cust1.address);
    printf("Name: %s\n Contact Number: %s\n Address: %s", cust2.name, cust2.contact_no, cust2.address);
    printf("Name: %s\n Contact Number: %s\n Address: %s", cust3.name, cust3.contact_no, cust3.address);

    return 0;
}

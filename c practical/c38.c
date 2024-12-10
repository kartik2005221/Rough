#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    printf("Enter data for 5 students:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: "); scanf("%s", students[i].name);
        printf("Enter roll number: "); scanf("%d", &students[i].roll_no);
        printf("Enter marks: "); scanf("%f", &students[i].marks);
    }

    printf("\n\nDisplaying student data:\n");
    printf("-----------------------------------------------------\n");
    printf("| %-15s | %-10s | %-6s |\n", "Name", "Roll No", "Marks");
    printf("-----------------------------------------------------\n");
    for (int i = 0; i < 5; i++)
        printf("| %-15s | %-10d | %-6.2f |\n", students[i].name, students[i].roll_no, students[i].marks);

    printf("-----------------------------------------------------\n");
    return 0;
}

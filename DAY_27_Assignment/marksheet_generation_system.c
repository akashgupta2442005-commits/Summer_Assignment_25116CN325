#include <stdio.h>
int main() {
    char name[50];
    int rollNo;
    float marks[5], total = 0, percentage;
    int i;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    // Input marks
    for(i = 0; i < 5; i++) {
        printf("Enter Marks of Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculate Percentage
    percentage = total / 5;

    // Display Marksheet
    printf("\n========== MARKSHEET ==========\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", rollNo);

    printf("\nMarks Obtained:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d : %.2f\n", i + 1, marks[i]);
    }

    printf("\nTotal Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    // Division
    if (percentage >= 60)
        printf("Division    : First Division\n");
    else if (percentage >= 45)
        printf("Division    : Second Division\n");
    else if (percentage >= 33)
        printf("Division    : Third Division\n");
    else
        printf("Division    : Fail\n");
    return 0;
}
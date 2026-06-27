#include <stdio.h>
#include <string.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

struct Student s[100];
int count = 0;

// Add Student
void addStudent() {
    printf("Enter Roll No: ");
    scanf("%d", &s[count].rollNo);

    printf("Enter Name: ");
    scanf("%s", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
    printf("Student Record Added Successfully!\n");
}

// Display Students
void displayStudents() {
    int i;

    if (count == 0) {
        printf("No records found!\n");
        return;
    }

    printf("\nStudent Records:\n");
    printf("Roll No\tName\tMarks\n");

    for (i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n",
               s[i].rollNo,
               s[i].name,
               s[i].marks);
    }
}

// Search Student
void searchStudent() {
    int roll, i, found = 0;

    printf("Enter Roll No to Search: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++) {
        if (s[i].rollNo == roll) {
            printf("\nRecord Found:\n");
            printf("Roll No: %d\n", s[i].rollNo);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student Record Not Found!\n");
}

// Delete Student
void deleteStudent() {
    int roll, i, j, found = 0;

    printf("Enter Roll No to Delete: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++) {
        if (s[i].rollNo == roll) {
            for (j = i; j < count - 1; j++) {
                s[j] = s[j + 1];
            }
            count--;
            found = 1;
            printf("Record Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Student Record Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 5);
    return 0;
}
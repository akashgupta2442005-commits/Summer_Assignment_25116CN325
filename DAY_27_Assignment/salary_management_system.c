#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float deduction;
    float grossSalary;
    float netSalary;
};
int main() {
    struct Employee emp;
    
    printf("===== Salary Management System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);

    // Calculate HRA (20%) and DA (10%)
    emp.hra = 0.20 * emp.basicSalary;
    emp.da = 0.10 * emp.basicSalary;

    printf("Enter Deduction Amount: ");
    scanf("%f", &emp.deduction);

    // Calculate Gross and Net Salary
    emp.grossSalary = emp.basicSalary + emp.hra + emp.da;
    emp.netSalary = emp.grossSalary - emp.deduction;

    // Display Salary Details
    printf("\n===== Salary Details =====\n");
    printf("Employee ID      : %d\n", emp.id);
    printf("Employee Name    : %s\n", emp.name);
    printf("Basic Salary     : %.2f\n", emp.basicSalary);
    printf("HRA (20%%)        : %.2f\n", emp.hra);
    printf("DA (10%%)         : %.2f\n", emp.da);
    printf("Gross Salary     : %.2f\n", emp.grossSalary);
    printf("Deduction        : %.2f\n", emp.deduction);
    printf("Net Salary       : %.2f\n", emp.netSalary);
    return 0;
}
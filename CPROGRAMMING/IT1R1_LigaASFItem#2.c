#include <stdio.h>

struct Employee {
    char name[20];
    float base_salary;
    float overtime_hours;
    float net_salary;
};

float total_expenses = 0;

void calculateSalary(struct Employee* employee) {
   
    float overtime_pay = employee->overtime_hours * (employee->base_salary / 40) * 1.5;
    float gross_salary = employee->base_salary + overtime_pay;

   
    float tax = 0.10 * gross_salary;

    
    employee->net_salary = gross_salary - tax;

   
    total_expenses += employee->net_salary;
}

void generatePayrollReport(struct Employee* employees, int numEmployees) {
    printf("\nPayroll Report:\n");
    printf("%-10s%-15s%-15s%-15s\n", "Name", "Base Salary", "Overtime Pay", "Net Salary");

    for (int i = 0; i < numEmployees; i++) {
        printf("%-10s%-15.2f%-15.2f%-15.2f\n", employees[i].name, employees[i].base_salary,
               employees[i].overtime_hours * (employees[i].base_salary / 40) * 1.5,
               employees[i].net_salary);
    }

    printf("\nTotal Company Expenses: ₱%.2f\n", total_expenses);
}

int main() {

    int loopProgram = 0;
    do {
         struct Employee employees[3];

    
    printf("**** Employee Payroll System ****\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Base Salary (in pesos): ");
        scanf("%f", &employees[i].base_salary);
        printf("Overtime Hours: ");
        scanf("%f", &employees[i].overtime_hours);

        
        calculateSalary(&employees[i]);
    }

   
    generatePayrollReport(employees, 3);

    printf("Do you want to loop the program: ");
    scanf("%d", &loopProgram);
    }while(loopProgram != 1 || loopProgram != 2);     
        printf("Invalid input, please try again: ");
        scanf("%d", &loopProgram);
    if(loopProgram == 1) {
    }else {
        printf("Bye \n");
    }

   
}

#include <stdio.h>
#include <string.h>

//for calculator prototype function
double addFunc(double n1, double n2);
double subFunc(double n1, double n2);
double mulFunc(double n1, double n2);
double divFunc(double n1, double n2);

//for library function
int restock_Func(int selectOpt);
int sell_Func(int stock, int sellQuanty);
int statistic_Func(int selectOpt);
int exit_Func(int selectOpt);

//for employee payroll
int employeeFunc(int selecProg);




// Global variable
int stock = 100, updatedStock, sellQuanty;



int main () {

    int selecProg;
    
    printf("Select Program \n");
    char programs[][30] = {"Basic Calculator", "Library Management", "Employee Payrol"};

    for(int i = 0; i < sizeof(programs) / sizeof(programs[0]); i++) {
        printf("%d. %s \n", i+1, programs[i]);
    }
    printf("Choose program: ");
    scanf("%d", &selecProg);


    switch (selecProg)
    {
    
    case 1:
    char arithOperators[][30] = {"Addition", "Subtraction", "Multiplication", "Division"};
    printf("Basic Calculator\n");
    double result;
    int n1, n2, selectOper;

    for(int j = 0; j < sizeof(arithOperators) / sizeof(arithOperators[0]); j++) {
        printf("%d. %s \n", j+1, arithOperators[j]);
    }
    printf("Chose operator(1-4): ");
    scanf("%d", &selectOper);

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    switch (selectOper)
    {
        
    case 1: result = addFunc(n1, n2);
    printf("Result: %.2lf \n", result);
    break;

    case 2: result = subFunc(n1, n2);
    printf("Result: %.2lf \n", result);
    break;

    case 3: result = mulFunc(n1, n2);
    printf("Result: %.2lf \n", result);
    break;
    
    case 4: result = divFunc(n1, n2);
    printf("Result: %.2lf \n", result);
    break;
    
    default: printf("Invalid Entry! \n");
        break;
    }
    break;

    case 2:
    char libraryOpt[][30] = {"Restock", "Sell", "Statistic", "Exit"};
    int selectOpt;


    for(int i = 0; i < sizeof(libraryOpt) / sizeof (libraryOpt[0]); i++ ) {
        printf("%d. %s \n", i+1, libraryOpt[i]);
    }

    printf("Choose option(1-4): ");
    scanf("%d", &selectOpt);

    switch (selectOpt)
    {
    case 1: restock_Func(selectOpt);

        break;

    case 2: int updated_Stock;
    updated_Stock = sell_Func(stock, sellQuanty);
    printf("Selling: %d \n", sellQuanty);
    printf("Updated stock: %d \n", updated_Stock);
    break;

    case 3: statistic_Func(selecProg);
    break;

    case 4: exit_Func(selecProg);
    break;
    
    default:
        break;
    }

    break;
//empoloyee payroll
    case 3: employeeFunc(selecProg);

    break;
    
    default:
        break;
    }
}

//for calculator functions
double addFunc(double n1, double n2) {
    return n1 + n2;
    }

double subFunc(double n1, double n2) {
    return n1 - n2;
    }

double mulFunc(double n1, double n2) {
    return n1 * n2;
    }

double divFunc(double n1, double n2) {
    return n1 / n2;
    }

    //for library function

    int restock_Func(int selectOpt)
    {
        int addStock;

        printf("==========Restocking==========\n");
        printf("\nCurrent stock: %d \n", stock);
        printf("Add quantity on current stock: ");
        scanf("%d", &addStock);

        updatedStock = addStock + stock;

        printf("Updated Stock: %d \n", updatedStock);

        return 0;
    }

    int sell_Func(int stock, int sellQuanty)
    {
        printf("==========Selling==========\n");
        printf("Current stock: %d \n", stock);
        printf("Enter quantity to sell: ");
        scanf("%d", &sellQuanty);

        printf("Selling: %d \n", sellQuanty);
        printf("Current stock: %d \n", stock);

        while(sellQuanty > stock) {
        printf("Insufficient stock, Current stock: %d \n", stock);
        scanf("%d", &sellQuanty);

        }
        if(sellQuanty <= stock) {
         return stock - sellQuanty;
            
        }
   
    }

    int statistic_Func(int selecProg)
    {
        updatedStock += stock;

        updatedStock= updatedStock - sellQuanty;

        printf("Updated stock: %d \n", updatedStock);
        printf("Sell stock: %d \n", (updatedStock));
        return 0;
    }

    int exit_Func(int selecProg)
    {
        return 0;
    }

    int employeeFunc(int selecProg) {
        
        int employNum;

        printf("Enter number of employee: ");
        scanf("%d", &employNum);
        getchar();

        char employNames[employNum][50];

        for(int i = 0; i < employNum; i++) {
            printf("Enter name of employee %d: ", i+1);
            fgets(employNames[i], sizeof(employNames[i]), stdin);
           
        }

        
    }



    


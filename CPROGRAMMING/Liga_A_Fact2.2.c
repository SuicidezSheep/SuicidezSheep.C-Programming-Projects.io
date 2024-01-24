#include <stdio.h>
//Alther Adrian P. Liga - IT1R14 - Activity #2.2

char arithmeticOpt () {

    char operation_Opt[][20] = {"Addition", "Subtraction", "Multiplication", "Division"};
    for(int i = 0; i < sizeof(operation_Opt) / sizeof(operation_Opt[0]); i++ ) {
        printf("%d. %s \n", i + 1, operation_Opt[i]);
    }
}
int result;
double result_Div;

int addition_Func(int n1, int n2);
int subtraction_Func(int n1, int n2);
int multiplication_Func(int n1, int n2);
double division_Func(int n1, int n2);

int main () {

    int loop_Prog = 1;

    do{
        
    int selectOperator;

    arithmeticOpt();

    printf("\nEnter selected operation: ");
    scanf("%d", &selectOperator);


    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);


        switch (selectOperator)
        {
        case 1: 
        result = addition_Func(n1, n2);
        printf("Addition: %d + %d = %d \n", n1, n2, result);
        break;

        case 2: result = subtraction_Func(n1, n2);
        printf("Subtraction: %d - %d = %d \n", n1, n2, result);
        break;

        case 3: result = multiplication_Func(n1, n2);
        printf("Subtraction: %d * %d = %d \n", n1, n2, result);
        break;

        case 4: if(n2 != 0) {
        result_Div = division_Func(n1, n2);
        printf("Subtraction: %d / %d = %d \n", n1, n2, result_Div);
        }else {
            printf("Error: Number cannot be divide to zero! \n");
        }
        break;
        
        default:
        while(selectOperator < 1 || selectOperator > sizeof(arithmeticOpt) / sizeof(arithmeticOpt)) {
            printf("Invalid choice: Just choose: %s \nEnter arithemetic operator: ", arithmeticOpt);
            scanf("%d", &selectOperator);
        }
            break;
        }
        printf("Do you want to create another program? (1.Yes 2. End ): ");
        scanf("%d", &loop_Prog);

    }while(loop_Prog == 1);
    if(loop_Prog == 2){
        printf("BYE! \n");
    }
}

int addition_Func(int n1, int n2) {
    return n1 + n2;
}
int subtraction_Func(int n1, int n2) {
    return n1 - n2;
}

int multiplication_Func(int n1, int n2) {
    return n1 * n2;
}

double division_Func(int n1, int n2) {
    return n1 / n2;
} 
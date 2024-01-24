#include <stdio.h>

int main () {


    //Create a calculator using C

    int selectOperator; // for arithmetic operators options
    int num1; // for first num variable 
    int num2; // for second num variable
    int result; // for the result of the two number
    float resultDiv; //

    printf("Start \n");

    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");

    printf("Choose operator: ");
    scanf("%d", &selectOperator); 

    if(selectOperator == 1) {
        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);

        result = num1 + num2;
        printf("Addition: %d \n", result);
    }
    else if (selectOperator == 2) {

        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);

        result = num1 - num2;
        printf("Subtraction: %d \n", result);
    }
    else if(selectOperator == 3) {

        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);

        result = num1 * num2;
        printf("Multiplication: %d \n", result);

    }
    else if (selectOperator == 4) {

        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);

        resultDiv = num1 / num2;
        printf("Division: %f \n", resultDiv);

    }
    else {
        printf("Invalid Entry!, just choose (1 - 4) \n");
    }

    printf("End \n");
    

}
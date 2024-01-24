#include <stdio.h> // Include the standard input and output library

int main() {
    int firstNum, secondNum, operatorChoice, result; // Declare variables to be used in the program

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n"); // Display the menu of arithmetic operations

    printf("Enter first number: "); // Prompt the user to enter the first number
    scanf("%d", &firstNum); // Read and store the first number provided by the user

    printf("Enter second number: "); // Prompt the user to enter the second number
    scanf("%d", &secondNum); // Read and store the second number provided by the user

    printf("Select operation: "); // Prompt the user to choose an operation
    scanf("%d", &operatorChoice); // Read and store the user's choice of operation

    switch (operatorChoice) { // Use a switch statement to perform the selected operation
        case 1:
            result = firstNum + secondNum; // Perform addition
            printf("Addition: %d + %d = %d\n", firstNum, secondNum, result);
            break;

        case 2:
            result = firstNum - secondNum; // Perform subtraction
            printf("Subtraction: %d - %d = %d\n", firstNum, secondNum, result);
            break;

        case 3:
            result = firstNum * secondNum; // Perform multiplication
            printf("Multiplication: %d * %d = %d\n", firstNum, secondNum, result);
            break;

        case 4:
            if (secondNum != 0) {
                result = firstNum / secondNum; // Perform division (if the divisor is not zero)
                printf("Division: %d / %d = %d\n", firstNum, secondNum, result);
            } else {
                printf("Error: Division by zero is not allowed.\n"); // Handle division by zero
            }
            break;

        default:
            printf("Invalid Entry!\n"); // Handle an invalid choice
    }

    return 0;
}

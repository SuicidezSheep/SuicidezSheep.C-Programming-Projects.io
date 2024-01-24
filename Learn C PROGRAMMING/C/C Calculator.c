#include <stdio.h>

int main() {
    // Display the menu of mathematical operations
    char operatorOpt[100] = "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    printf("Mathematical Operations Menu:\n%s\n", operatorOpt);

    int operatorChoice;
    // Prompt the user to enter their choice
    printf("Enter the number corresponding to your choice: ");
    scanf("%d", &operatorChoice);

    double firstNum, secondNum, result;

    // Check if the user's choice is within the valid range (1 to 4)
    if (operatorChoice >= 1 && operatorChoice <= 4) {
        // Get user input for the two numbers
        printf("Enter the first number: ");
        scanf("%lf", &firstNum);
        printf("Enter the second number: ");
        scanf("%lf", &secondNum);

        // Perform the selected arithmetic operation based on the user's choice
        switch (operatorChoice) {
            case 1: // Addition
                result = firstNum + secondNum;
                break;
            case 2: // Subtraction
                result = firstNum - secondNum;
                break;
            case 3: // Multiplication
                result = firstNum * secondNum;
                break;
            case 4: // Division
                // Check for division by zero
                if (secondNum == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1; // Exit with an error code
                }
                result = firstNum / secondNum;
                break;
        }
        // Display the result with two decimal places
        printf("Result: %.2lf\n", result);
    } else {
        // Display an error message for an invalid choice
        printf("Invalid choice.\n");
    }

    return 0;
}

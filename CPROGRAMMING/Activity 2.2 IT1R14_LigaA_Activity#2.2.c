#include <stdio.h>


float addNumbers(float num1, float num2);
float subtractNumbers(float num1, float num2);
float multiplyNumbers(float num1, float num2);
float divideNumbers(float num1, float num2);

int main(void) {
    float num1, num2, result;
    char operation;

    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

 
    printf("\nSelect operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice (1-4): ");
    scanf(" %c", &operation);

   
    switch (operation) {
        case '1':
            result = addNumbers(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case '2':
            result = subtractNumbers(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case '3':
            result = multiplyNumbers(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case '4':
            // Check for division by zero
            if (num2 != 0) {
                result = divideNumbers(num1, num2);
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}


float addNumbers(float num1, float num2) {
    return num1 + num2;
}

float subtractNumbers(float num1, float num2) {
    return num1 - num2;
}

float multiplyNumbers(float num1, float num2) {
    return num1 * num2;
}

float divideNumbers(float num1, float num2) {
    return num1 / num2;
}

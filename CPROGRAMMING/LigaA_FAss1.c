#include <stdio.h>

// Function prototype
unsigned long long fibonacci(int num);  // Declare the fibonacci function

// Main function
int main(void) {
    int num;  // Declare an integer variable to store user input

    // Prompt user for input
    printf("Enter non-negative number: ");  // Display a message to the user
    scanf("%d", &num);  // Read user input and store it in the variable 'num'

    // Validate user input
    while (num < 0) {
        // Display error message and prompt user again if input is negative
        printf("Invalid entry, Please input a positive integer: ");
        scanf("%d", &num);  // Read user input again
    }

    // Calculate and print Fibonacci number
    if (num >= 0) {
        fibonacci(num);  // Call the fibonacci function with user input as an argument
    }

    return 0;  // Indicate successful program execution
}

// Fibonacci function
unsigned long long fibonacci(int num) {
    // Initialize variables
    unsigned long long num1 = 0, num2 = 1, temp;  // Declare variables for Fibonacci calculation

    // Handle base cases (0 and 1)
    if (num == 0) {
        temp = num1;  // If input is 0, set 'temp' to the first Fibonacci number
    } else if (num == 1) {
        temp = num2;  // If input is 1, set 'temp' to the second Fibonacci number
    } else {
        // Calculate Fibonacci numbers iteratively
        for (int i = 2; i <= num; ++i) {
            temp = num1 + num2;  // Calculate the next Fibonacci number
            num1 = num2;  // Update the first Fibonacci number
            num2 = temp;  // Update the second Fibonacci number
        }
    }

    // Print result
    printf("Fibonacci: %d is %llu \n", num, temp);  // Display the calculated Fibonacci number

    // Return the Fibonacci number
    return temp;
}

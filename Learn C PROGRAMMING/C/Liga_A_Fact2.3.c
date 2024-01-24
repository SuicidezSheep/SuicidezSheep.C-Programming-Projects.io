#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int choice;
    float temperature;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    if (choice == 1) {
        float convertedTemperature = celsiusToFahrenheit(temperature);
        printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", temperature, convertedTemperature);
    } else if (choice == 2) {
        float convertedTemperature = fahrenheitToCelsius(temperature);
        printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", temperature, convertedTemperature);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
#include <stdio.h>

// Function prototypes
void displayMenu(char menu[][20], float prices[], int size);
void displayMenuByCategory(char menu[][20], float prices[], int start, int end, int categoryStart);
int orderFunc(int selectOrder, char menu[][20], float prices[], int quantities[], int size, int categoryChoice);
float calculateTotal(int quantities[], float prices[], int size);
void processPayment(float total);
void displayTransactionDetails(char menu[][20], float prices[], int quantities[], float total, int size);

int main() {
    char menu[][20] = {
        "Coca-Cola", "Pepsi", "Sprite", "Iced Coffee", "Orange Juice", "Mango Shake", "Water",
        "Yum-burger", "Chicken Joy", "Spaghetti", "Burger Steak", "Palabok Fiesta", "Jolly Hotdog", "Aloha Burger"
    };
    float prices[] = {20, 25, 20, 30, 25, 40, 15, 40, 90, 50, 60, 80, 50, 55};
    int quantities[sizeof(menu) / sizeof(menu[0])] = {0}; // Initialize quantities array with zeros

    char createAnotherProgram;

    do {
        int selectOrder;
        char continueOrder;

        do {
            printf("\nHapagSarap Fast-food Menu\n");
            printf("1. Drinks\n");
            printf("2. Meals\n");
            printf("Select category: ");
            int categoryChoice;
            scanf("%d", &categoryChoice);

            if (categoryChoice == 1 || categoryChoice == 2) {
                displayMenuByCategory(menu, prices, (categoryChoice - 1) * 7, categoryChoice * 7, (categoryChoice - 1) * 7);
            } else {
                printf("Invalid category selection\n");
                continue;
            }

            printf("Enter your order: ");
            scanf("%d", &selectOrder);

            if ((categoryChoice == 1 && selectOrder >= 1 && selectOrder <= 7) || 
                (categoryChoice == 2 && selectOrder >= 1 && selectOrder <= 7)) {
                printf("Enter quantity for %s: ", menu[(categoryChoice - 1) * 7 + selectOrder - 1]);
            } else {
                printf("Invalid order selection\n");
                continue;
            }

            int quantity;
            scanf("%d", &quantity);

            quantities[(categoryChoice - 1) * 7 + selectOrder - 1] += quantity;
            orderFunc(selectOrder, menu, prices, quantities, sizeof(menu) / sizeof(menu[0]), categoryChoice);

            printf("Do you want to continue ordering? (y/n): ");
            scanf(" %c", &continueOrder);

        } while (continueOrder == 'y' || continueOrder == 'Y');

        float total = calculateTotal(quantities, prices, sizeof(menu) / sizeof(menu[0]));
        displayTransactionDetails(menu, prices, quantities, total, sizeof(menu) / sizeof(menu[0]));
        processPayment(total);

        printf("Do you want to create another program? (y/n): ");
        scanf(" %c", &createAnotherProgram);

    } while (createAnotherProgram == 'y' || createAnotherProgram == 'Y');
    printf("Thank You!\n"); 

    return 0;
}

// Function to display the menu
void displayMenu(char menu[][20], float prices[], int size) {
    printf("| No | Menu Item            | Price     |\n");
    printf("|----|----------------------|-----------|\n");
    for (int i = 0; i < size; i++) {
        printf("|%-4d|%-22s| ₱%-8.2f |\n", i + 1, menu[i], prices[i]);
    }
}

// Function to display the menu based on category - liga
void displayMenuByCategory(char menu[][20], float prices[], int start, int end, int categoryStart) {
    printf("*** %s ***\n", start == 0 ? "Drinks" : "Meals");
    printf("| No | Menu Item            | Price     |\n");
    printf("|----|----------------------|-----------|\n");
    for (int i = start; i < end; i++) {
        printf("|%-4d|%-22s| ₱%-8.2f |\n", i + 1 - categoryStart, menu[i], prices[i]);
    }
}

// Function definition for order processing - liga
int orderFunc(int selectOrder, char menu[][20], float prices[], int quantities[], int size, int categoryChoice) {
    int index = (categoryChoice - 1) * 7 + selectOrder - 1;
    printf("Order selected: %s: ₱%.2f \n", menu[index], prices[index]);
    printf("Quantity: %d\n", quantities[index]);
    return 0;
}

// Function to calculate the total cost of the order
float calculateTotal(int quantities[], float prices[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += quantities[i] * prices[i];
    }
    return total;
}

// Function to display transaction details
void displayTransactionDetails(char menu[][20], float prices[], int quantities[], float total, int size) {
    printf("\nTransaction Details:\n");
    for (int i = 0; i < size; i++) {
        if (quantities[i] > 0) {
            printf("%s x%d = ₱%.2f\n", menu[i], quantities[i], quantities[i] * prices[i]);
        }
    }
    printf("Total: ₱%.2f\n", total);
}

// Updated function to process the payment
void processPayment(float total) {
    printf("\nTotal amount: ₱%.2f\n", total);

    // Choose mode of payment
    int paymentOption;
    printf("Select mode of payment:\n");
    printf("1. Gcash\n");
    printf("2. Credit card\n");
    printf("3. Debit card\n");
    printf("4. Paymaya\n");

    printf("Enter your choice: ");
    scanf("%d", &paymentOption);

    // Get payment amount
    float paymentAmount;
    printf("Enter payment amount: ₱");
    scanf("%f", &paymentAmount);

    // Check if the payment amount is sufficient
    while (paymentAmount < total) {
        printf("Insufficient payment. Please enter a valid amount: ₱");
        scanf("%f", &paymentAmount);
    }

    float change = paymentAmount - total;
    printf("Payment successful!\n");
    printf("Change: ₱%.2f\n", change);
}

/* Leader: Alther Adrian P. Liga
   Members:
           Ervin John Macalong
           Jharam Julez Apostol
           Josh Nico Hamorol
           Kert Jandayan
           Dave Salem

    Section: IT 1R14
*/
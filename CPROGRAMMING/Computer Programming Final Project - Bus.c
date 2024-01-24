#include <stdio.h>

// Function prototypes
void routeMenuFunc(char busRoute[][20], float busFare[], int size);
void selectDestinationFunc(char busRoute[][20], float busFare[], int size, int selectDestination);
void typePassengerFunc(char passengerType[][30], int selectTypePassenger, float discountedFare, float busFare[], int selectDestination, float *updatedFare, int passengerTypeSize);

int main() {
    char busRoute[][20] = {
        "Agora - Gusa", "Agora - Cugman", "Agora - Baloy", "Agora - Tablon",
        "Agora - Agusan", "Agora - Puerto", "Agora - Bugo"
    };
    float busFare[] = {12, 15, 17, 20, 22, 25, 30};
    char passengerType[][30] = {"20%-Student Privileges", "20%-Senior Citizen", "20%-PWD", "No discount-Regular"};
    float discountedFare = 0.20;
    float updatedFare;

    int size = sizeof(busRoute) / sizeof(busRoute[0]); // calculate the array

    int restartProgram = 1;  // Variable to control program restart
    while (restartProgram) {
        printf("\t----------Agora Terminal----------\n\n");
        printf("\t----------Monte Carlo Line----------\n");
        routeMenuFunc(busRoute, busFare, size);

        int selectDestination;
        printf("Enter destination: ");
        scanf("%d", &selectDestination);

        selectDestinationFunc(busRoute, busFare, size, selectDestination);
        printf("\n");

        printf("Type of Passenger\n");
        for (int y = 0; y < sizeof(passengerType) / sizeof(passengerType[0]); y++) {
            printf("%d. %s\n", y + 1, passengerType[y]);
        }
        int selectTypePassenger;
        printf("Enter type: ");
        scanf("%d", &selectTypePassenger);

        typePassengerFunc(passengerType, selectTypePassenger, discountedFare, busFare, selectDestination, &updatedFare, sizeof(passengerType) / sizeof(passengerType[0]));

        float paymentAmount;
        do {
            printf("Enter Payment Amount: ");
            scanf("%f", &paymentAmount);

            if (paymentAmount < updatedFare) {
                printf("Insufficient amount. Please enter a valid amount.\n");
            }
        } while (paymentAmount < updatedFare);

        float change = paymentAmount - updatedFare;
        printf("\n\t*****Receipt Summary*****\n");
        printf("Destination: %s\n", busRoute[selectDestination - 1]);
        printf("Passenger Type: %s\n", passengerType[selectTypePassenger - 1]);
        printf("Total Fare: ₱%.2f\n", updatedFare);
        printf("Payment Amount: ₱%.2f\n", paymentAmount);
        printf("Change: ₱%.2f\n", change);

        printf("\nDo you want to make another transaction? (1 for Yes, 0 for No): ");
        scanf("%d", &restartProgram);
    }

    printf("Thank you for using the Monte Carlo Liner. Have a great day!\n");

    return 0;
}

void routeMenuFunc(char busRoute[][20], float busFare[], int size) {
    printf("Bus Route Menu\n");
    printf("%-2s %-20s %-10s\n", "No", "Route", "Fare");
    for (int i = 0; i < size; i++) {
        printf("%-2d %-20s ₱%-10.2f\n", i + 1, busRoute[i], busFare[i]);
    }
}

void selectDestinationFunc(char busRoute[][20], float busFare[], int size, int selectDestination) {
    if (selectDestination >= 1 && selectDestination <= size) {
        printf("Destination selected: %s - ₱%.2f\n", busRoute[selectDestination - 1], busFare[selectDestination - 1]);
    } else {
        printf("Invalid destination selection.\n");
    }
}

void typePassengerFunc(char passengerType[][30], int selectTypePassenger, float discountedFare, float busFare[], int selectDestination, float *updatedFare, int passengerTypeSize) {
    if (selectTypePassenger == passengerTypeSize) {
        // No discount for "No discount-Regular" passenger type
        *updatedFare = busFare[selectDestination - 1];
    } else {
        // Apply discount for other passenger types
        *updatedFare = busFare[selectDestination - 1] - (discountedFare * busFare[selectDestination - 1]);
    }

    printf("Passenger Type: %s || Updated Fare: ₱%.2f\n", passengerType[selectTypePassenger - 1], *updatedFare);
}

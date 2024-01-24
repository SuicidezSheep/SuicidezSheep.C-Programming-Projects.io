#include <stdio.h>
#include <string.h>

char option[][30] = {"Restock Product", "Sell Product", "Exit"};
int productQuantity = 0;
char productCode[30];
int isValid;

int restockProduct(int selectOpt, int *updatedNumber);
int sellProduct(int selectOpt, int *updatedNumber);

int main() {
    int loop_Program = 1;

    do {
        int selectOpt, updatedNumber;

        printf("Enter stock: ");
        scanf("%d", &productQuantity);

        printf("Enter product code: ");
        scanf("%s", productCode);

        printf("Available Stocks: %d \n", productQuantity);
        printf("Product code: %s \n", productCode);

        for (int i = 0; i < sizeof(option) / sizeof(option[0]); i++) {
            printf("%d. %s \n", i + 1, option[i]);
        }

        printf("Choose option: ");
        scanf("%d", &selectOpt);

        if (selectOpt >= 1 && selectOpt <= sizeof(option) / sizeof(option[0])) {
            printf("You choose: %s \n", option[selectOpt - 1]);
        }

        if (selectOpt == 1) {
            restockProduct(selectOpt, &updatedNumber);
            printf("\nAvailable Stocks: %d\n", productQuantity);
        } else if (selectOpt == 2) {
            sellProduct(selectOpt, &updatedNumber);
            printf("\nAvailable Stocks: %d\n", productQuantity);
        } else if (selectOpt == 3) {
            printf("\nThank you, Bye! \n");
            loop_Program = 0;
        }
    } while (loop_Program);

    return 0;
}

int restockProduct(int selectOpt, int *updatedNumber) {
    int addBook;
    char pro_Code[30];

    isValid = 0;

    do {
        printf("Enter product code: ");
        scanf("%s", pro_Code);

        if (strcmp(pro_Code, productCode) == 0) {
            isValid = 1;
            break;
        }

        if (!isValid) {
            printf("Invalid product code, Please try again: ");
        }

    } while (!isValid);

    printf("Enter number of books to be added: ");
    scanf("%d", &addBook);

    *updatedNumber = productQuantity += addBook;
    printf("\nRestocking:\nPrevious quantity: %d > Updated quantity: %d \n", productQuantity - addBook, *updatedNumber);
    printf("Adding %d units. \n", addBook);

    return 0;
}

int sellProduct(int selectOpt, int *updatedNumber) {
    int bookSell;
    char pro_Code[30];

    printf("Enter product code: ");
    scanf("%s", pro_Code);

    isValid = 0;

    if (strcmp(pro_Code, productCode) == 0) {
        isValid = 1;
    }

    if (!isValid) {
        printf("Invalid product code, Please try again: ");
        return 0;
    }

    printf("Enter the quantity to sell: ");
    scanf("%d", &bookSell);

    while (bookSell > productQuantity) {
        printf("Insufficient stock, Try again: ");
        scanf("%d", &bookSell);
    }

    *updatedNumber = productQuantity -= bookSell;
    printf("Selling: Previous quantity %d > Updated quantity: %d \n", productQuantity + bookSell, *updatedNumber);
    printf("Selling: %d units. \n", bookSell);

    return 0;
}

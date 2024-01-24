#include <stdio.h>
#include <string.h>

int globaVariables = 0;

int restockSupplies() {
    int restock, updatedStock;

    printf("Enter quantity to restock: ");
    scanf("%d", &restock);

    updatedStock = restock + globaVariables;
    globaVariables = updatedStock;  // Update the global stock
    printf("Restocking: %d > %d\n", globaVariables - restock, globaVariables);

    return updatedStock;  
}

int sellingProducts() {
    int sellProduct;

    printf("Enter quantity to sell: ");
    scanf("%d", &sellProduct);

    if (sellProduct <= globaVariables) {
        globaVariables -= sellProduct;  // Update the global stock
        printf("Selling: %d > %d\n", globaVariables + sellProduct, globaVariables);
    } else {
        printf("Not enough stock to sell.\n");
    }
}

int main() {
    char option[][20] = {"Restock", "Sell", "Exit"};
    int selectOpt;
    char sto_Updated[20] = "Stock Updated!";

    printf("Enter stock: ");
    scanf("%d", &globaVariables);
    printf("Current stock: %d\n", globaVariables);

    for (int i = 0; i < sizeof(option) / sizeof(option[0]); i++) {
        printf("%d. %s\n", i + 1, option[i]);
    }

    printf("\nSelect option: ");
    scanf("%d", &selectOpt);


    switch (selectOpt) {
        case 1:
            printf("Restocking\n");
            restockSupplies();
            printf("%s\n", sto_Updated);
            break;

        case 2:
            printf("Selling\n");
            sellingProducts();
            printf("%s\n", sto_Updated);
            break;

        case 3:
            printf("Exiting\n");
            break;

        default:
            printf("Invalid option\n");
    }

    return 0;
}

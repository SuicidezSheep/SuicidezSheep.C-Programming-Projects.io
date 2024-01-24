#include <stdio.h>
#include <string.h>

char fastFoodMenu[][30] = {"Burger", "Fries", "Pizza", "Ice Cream"};
float menuPrices[] = {80, 55, 300, 200};

void fastF_func(int selectOrder, int orderQuantity) {


    if (selectOrder >= 1 && selectOrder <= sizeof(fastFoodMenu) / sizeof(fastFoodMenu[0])) {
        printf("Order selected: %s %.2f \n", fastFoodMenu[selectOrder - 1], menuPrices[selectOrder - 1]);
    }

    printf("Order QuantitY: %dx %s %.2f \n", orderQuantity, fastFoodMenu[selectOrder - 1], menuPrices[selectOrder -1]);

}

int main(void) {
    int selectOrder, orderQuantity;

    printf("Fast Food Menu Alther \n");
    
    for(int i = 0; i < sizeof(fastFoodMenu) / sizeof(fastFoodMenu[0]); i++) {
        printf("%d. %s %.2f \n", i + 1, fastFoodMenu[i], menuPrices[i]);
    }

    printf("Enter order: ");
    scanf("%d", &selectOrder);

    printf("Enter quantity: ");
    scanf("%d", &orderQuantity);
    
    fastF_func(selectOrder, orderQuantity);


    return 0;
}

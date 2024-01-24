#include <stdio.h>

void routeFunc(char route[][20], float fare[], int size);

struct myStructure
{
    int num1; 
    int num2;
    int x;
};


int main() {

    int nums[3][3] = {{1, 2, 3}, {2, 4, 6}};
    printf("%d \n", nums[1][2   ]);

    
    char greetings[] = {'H', 'i', '\0'};
    printf("%c\n", greetings[0]);
    printf("%c\n", greetings[1]);
    printf("%s\n", greetings);
    
    struct myStructure firstNum;
    struct myStructure secondNum;
    struct myStructure result;

    firstNum.num1 = 10;
    firstNum.num2 = 10;
    firstNum.x = firstNum.num1 + firstNum.num2;

    printf("Sum of %d + %d = %d\n", firstNum.num1, firstNum.num2, firstNum.x);

    printf("Enter first number: ");
    scanf("%d", &secondNum.num1);

    printf("Enter second number: ");
    scanf("%d", &secondNum.num2);

    secondNum.x = secondNum.num1 * secondNum.num2;
    printf("Product of %d * %d = %d\n", secondNum.num1, secondNum.num2, secondNum.x);

    char route[][20] = {"CdeO - Bukidnon", "Cdeo - Butuan", "Cdeo - Cotabato", "Cdeo - Davao"};
    float fare[] = {200, 300, 400, 350};
    int size = sizeof(route) / sizeof(route[0]);

    routeFunc(route, fare, size);

    return 0;
}

void routeFunc(char route[][20], float fare[], int size) {
    int i;

    for(i = 0; i < size; i++ ) {
        printf("%d. %s - %.2f \n", i+1, route[i], fare[i] );
    }

   
}

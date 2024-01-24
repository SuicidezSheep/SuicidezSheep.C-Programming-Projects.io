#include <stdio.h>

float func(int x, int y);
int checkBoolFunc(int isBoolean, int n);

struct myStructure
{
    int arithmetic;
};


int main () {

    int x = 15;
    int y = 10;
    int result;

    result = func(x, y);

    int isBoolean = 1;
    int n = 10;

    printf("Enter number number: ");
    scanf("%d", &isBoolean);

    checkBoolFunc(isBoolean, n);
    printf("\n\n");

    struct addition;
    struct subtraction;
    

    return 0;

}

float func(int x, int y)
{
    if(x > y) 
    printf("X is greater than Y!\n");  
    
}

int checkBoolFunc(int isBoolean, int n) {

    if(isBoolean == n) {
        printf("%d is equal to %d\n", isBoolean, n);
    }else if (isBoolean > n) {
        printf("%d is greater to %d\n", isBoolean, n);
    }else if (isBoolean < n) {
        printf("%d is less than to %d\n", isBoolean, n);
    }

}
